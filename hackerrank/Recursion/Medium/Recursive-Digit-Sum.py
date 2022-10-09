def recur(n):
    if (len(n) == 1):
        return int(n)
    else:
        t = map(int, list(n))
        return recur(str(sum(t)))

n, k = map(int, input().split(' '))
n = str(n)
s = map(int, list(n))
print(recur(str(sum(s) * k)))