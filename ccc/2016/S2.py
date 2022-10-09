q = int(input())
n = int(input())
D = list(map(int, input().split()))
P = list(map(int, input().split()))
if q == 1:
    D.sort()
    P.sort()
    mins = 0
    for i in range(n):
        mins += max([D[i], P[i]])
    print(mins)
else:
    D.sort()
    P.sort(reverse=True)
    maxs = 0
    for i in range(n):
        maxs += max([D[i], P[i]])
    print(maxs)
'''
1
3
5 1 4
6 2 4

2
5
202 177 189 589 102
17 78 1 496 540

2
3
5 1 4
6 2 4
'''