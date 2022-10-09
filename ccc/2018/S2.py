n = int(input())
data = []
for i in range(n):
    temp = list(map(int, input().split()))
    data.append(temp)
def rotate(d):
    newd = [[0 for x in range(n)] for y in range(n)] 
    i = 0
    for x in range(n-1, -1, -1):
        for y in range(0, n):
            a = int(i/n)
            b = i % n
            newd[y][x] = d[a][b]
            i += 1
    return newd
def valid(d):
    col = []
    for x in range(n):
        temp = d[x]
        if temp != sorted(temp):
            return False
        col.append(temp[0])
    if col != sorted(col):
        return False
    return True

while not valid(data):
    data = rotate(data)

for row in data:
    print(*row)

'''
2
1 3
2 9

3
4 3 1
6 5 2
9 7 3

3
3 7 9
2 5 6
1 3 4
'''