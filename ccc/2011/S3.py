t = int(input())

def bound(m, x):
    if m >= 1:
        n = 5**(m-1)
        loc = x//n
        # 1, 3 or 2 or 0, 4
        if loc == 0 or loc == 4:
            return 0
        elif loc == 1 or loc == 3:
            return n + bound(m-1, x % n)
        elif loc == 3:
            return 2*n + bound(m-1, x & n)
    return 0
res = []

for i in range(t):
    inp = list(map(int, input().split()))
    m, x, y = inp[0], inp[1], inp[2]
    top = bound(m, x)
    if y < top:
        res.append("crystal")
    else:
        res.append("empty")
print(res)
'''
4
1 1 1
1 1 0
1 2 1
2 8 5
'''