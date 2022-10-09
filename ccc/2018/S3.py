inp = list(map(int, input().split()))
n = inp[0]
m = inp[1]
visited = [[False for i in range(m)] for j in range(n)] 
endpoints = {} # { "x"+" "+"y": distance } 
grid = []
startpos = None
for i in range(n):
    grid.append(input())
for x in range(n):
    for y in range(m):
        if grid[x][y] == "S":
            startpos = tuple([x, y])
        if grid[x][y] == ".":
            endpoints[str(x)+" "+str(y)] = -1
def isValid(x, y):
    if x >= n or x < 0 or y >= m or y < 0:
        return False
    if grid[x][y] == "C" or grid[x][y] == "W":
        return False
    if grid[x][y] == ".": # and (grid[x-1][y] == "C" or grid[x+1][y] == "C" or grid[x][y-1] == "C" or grid[x][y+1] == "C"): # rewrite this
        for i in range(y, -1, -1):
            if grid[x][i] == "W":
                break
            elif grid[x][i] == "C":
                return False
        for i in range(y, m+1):
            if grid[x][i] == "W":
                break
            elif grid[x][i] == "C":
                return False
        for i in range(x, -1, -1):
            if grid[i][y] == "W":
                break
            elif grid[i][y] == "C":
                return False
        for i in range(x, n+1):
            if grid[i][y] == "W":
                break
            elif grid[i][y] == "C":
                return False
    return True
q = []
q.insert(0, [startpos[0], startpos[1], 0])
# dist = 0
while len(q) != 0:
    # print(q)
    tup = q.pop()
    x, y, d = tup[0], tup[1], tup[2]
    key = str(x)+" "+str(y)
    if visited[x][y]:
        continue
    visited[x][y] = True
    if isValid(x, y) and grid[x][y] == ".":
        endpoints[key] = d
    # go left, right, up, down possibilities
    if grid[x][y] == "L" and isValid(x, y-1) and not visited[x][y-1]:
        q.insert(0, tuple([x, y-1, d]))
    elif grid[x][y] == "R" and isValid(x, y+1) and not visited[x][y+1]:
        q.insert(0, tuple([x, y+1, d]))
    elif grid[x][y] == "U" and isValid(x-1, y) and not visited[x-1][y]:
        q.insert(0, tuple([x-1, y, d]))
    elif grid[x][y] == "D" and isValid(x+1, y) and not visited[x+1][y]:
        q.insert(0, tuple([x+1, y, d]))
    # normal floodfill searching possibilities
    if (grid[x][y] == "." or grid[x][y] == "S") and isValid(x-1, y) and not visited[x-1][y]:
        q.insert(0, tuple([x-1, y, d+1]))
    if (grid[x][y] == "." or grid[x][y] == "S") and isValid(x+1, y) and not visited[x+1][y]:
        q.insert(0, tuple([x+1, y, d+1]))
    if (grid[x][y] == "." or grid[x][y] == "S") and isValid(x, y-1) and not visited[x][y-1]:
        q.insert(0, tuple([x, y-1, d+1]))
    if (grid[x][y] == "." or grid[x][y] == "S") and isValid(x, y+1) and not visited[x][y+1]:
        q.insert(0, tuple([x, y+1, d+1]))

for key in endpoints:
    print(endpoints[key])
'''
4 5
WWWWW
W.W.W
WWS.W
WWWWW

5 7
WWWWWWW
WD.L.RW
W.WCU.W
WWW.S.W
WWWWWWW
'''