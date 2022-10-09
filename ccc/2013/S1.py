def isdistinct(n):
    n = list(str(n))
    setn = list(set(n))
    if len(n) != len(setn):
        return False
    else:
        return True

n = int(input()) + 1
while not isdistinct(n):
    n += 1

print(str(n))