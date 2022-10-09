t = int(input())

ans = []

for z in range(t):
    n = int(input())
    top = []
    branch = []
    lake = []
    for i in range(n):
        top.append(int(input()))

    # 3 possible operations per turn
    # Slide car directly from mountain top to the lake
    # Slide car from the mountain top to the branch
    # Slide car from the branch to the lake
    # If none of the operations can be done, then the recipe cannot be completed

    desiredCar = 1
    state = "Y"
    while state == "Y" and desiredCar <= n:
        if len(top) != 0 and top[-1] == desiredCar:
            lake.append(top.pop())
            desiredCar += 1

        elif len(branch) != 0 and branch[-1] == desiredCar:
            lake.append(branch.pop())
            desiredCar += 1

        elif len(top) != 0:
            branch.append(top.pop())

        else:
            state = "N"
    ans.append(state)

for a in ans:
    print(a)

'''
2
4
2
3
1
4
4
4
1
3
2
'''