n = int(input())
sw = list(map(int, input().split()))
se = list(map(int, input().split()))
tsw = 0
tse = 0
k = 0
for i in range(n):
    tsw += sw[i]
    tse += se[i]
    if tsw == tse:
        if (i+1) > k:
            k = i+1
print(k)

'''
3
1 3 3
2 2 6

3
1 2 3
4 5 6

4
1 2 3 4
1 3 2 4
'''