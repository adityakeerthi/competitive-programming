from math import sqrt, floor
'''
Trying the same algorithm in Python to see the difference in speed between C++ and Python
'''
n = int(input())
m = int(input())
grid = []
visited = [[False for i in range(m)] for j in range(n)] 
def isValid(x, y, n, m):
    if x >= n or x < 0 or y >= m or y < 0:
        return False
    return True
for i in range(n):
    gtemp = list(map(int, input().split()))
    grid.append(gtemp)
q = []
q.insert(0, tuple([0, 0]))
ans = False
while not ans and len(q) != 0:
    tup1 = q.pop()
    x = tup1[0]
    y = tup1[1]
    if visited[x][y]:
        continue
    if x == n-1 and y == m-1:
        ans = True
        continue
    visited[x][y] = True
    value = grid[x][y]
    for i in range(1, int(floor(sqrt(value))) + 1):
        if value % i == 0:
            row = int(value/i)
            col = i
            row -= 1
            col -= 1
            if isValid(row, col, n, m):
                if not visited[row][col]:
                    q.insert(0, tuple([row, col]))
            if isValid(col, row, n, m):
                if not visited[col][row]:
                    q.insert(0, tuple([col, row]))

if ans:
    print("yes")
else:
    print("no")

'''
3
4
3 10  8 14
1 11 12 12
6  2  3  9
'''