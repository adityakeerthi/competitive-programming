n, m = map(int, input().split(' '))
grid = []
maxes = []
for i in range(n):
    t = list(map(str, input()))
    grid.append(t)

def valid(x, y):
    if x < 0 or x > (n-1) or y < 0 or y > (m-1): return False
    if (grid[x][y] == "B"): return False
    return True

def getMaxPlus(x, y):
    ct = 1
    for i in range(1, n+1):
        if valid(x, y+i) and valid(x+i, y) and valid(x, y-i) and valid(x-i, y): ct += 4
        else: break
    return ct

for i in range(n):
    for j in range(m):
        if valid(i, j): maxes.append(getMaxPlus(i, j))

maxes.sort()
maxes.reverse()
print(maxes[0] * maxes[1])