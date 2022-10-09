inp = list(map(int, input().split()))
n = inp[0]
k = inp[1]

tri = []
for i in range(n):
    row = list(map(int, input().split()))
    tri.append(row)

def getMax(a, b, c):
    return max(a, max(b, c))

# Incrementing through multiple sizes all the way up to k

for s in range(2, k+1):
    for x in range(n-s+1):
        for y in range(0, x+1):
            tri[x][y] = getMax(tri[x][y], tri[x+1][y], tri[x+1][y+1])

ans = 0
for x in range(n-k+1):
    for y in range(x+1):
        ans += tri[x][y]

print(ans)

'''
4 2
3
1 2
4 2 1
6 1 4 2
'''