n = int(input())
state = []

for i in range(n):
    inp = int(input())
    if inp == 0:
        state.pop()
    else:
        state.append(inp)

print(sum(state))

'''
4
3
0
4
0

10
1
3
5
4
0
0
7
0
0
6
'''