n = int(input())
t = int(input())
d = []

ans = 0
tempx = -1
tempy = -1

for i in range(n):
    temp = list(map(int, input().split()))
    tempx = max(tempx, max(temp[0], temp[2]))
    tempy = max(tempx, max(temp[1], temp[3]))
    d.append(temp)
glass = [[0 for i in range(tempx+1)] for i in range(tempy+1)]

for row in d:
    for x in range(row[0], row[2]):
        for y in range(row[1], row[3]):
            glass[x][y] += row[4]

for x in range(tempx+1):
    for y in range(tempy+1):
        if glass[x][y] >= t:
            ans += 1

print(ans)

'''
4
3
11 11 20 15 1
13 8 14 17 2
17 8 18 17 1
12 12 19 13 1
'''