n = int(input())
inp = []
cor = []
ans = 0

for i in range(n):
    a = input()
    inp.append(a)

for i in range(n):
    a = input()
    cor.append(a)

for i in range(n):
    if inp[i] == cor[i]:
        ans += 1

print(ans)

'''
3
A
B
C
A
C
B

3
A
A
A
A
B
A
'''