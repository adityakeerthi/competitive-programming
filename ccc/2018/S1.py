t = int(input())
n = []
ans = []
for i in range(t):
    n.append(int(input()))
n.sort()
for a in range(0, len(n)-2):
    ans.append(round(abs(n[a] - n[a+2])/2, 1))

print(min(ans))
'''
5
16
0
10
4
15

5
0
1
5
25
40
'''