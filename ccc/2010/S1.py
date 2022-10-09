n = int(input())

com = []
n1 = ""
n2 = ""
v1 = -1
v2 = -1

for i in range(n):
    inp = input().split()
    p = 2*int(inp[1]) + 3*int(inp[2]) + int(inp[3])
    name = inp[0]
    if p > v1 or (p == v1 and name < n1):
        v2 = v1
        n2 = n1
        v1 = p
        n1 = name
    elif p > v2 or (p == v2 and name < n2):
        v2 = p
        n2 = name

if n == 1:
    print(n1)

else:
    print(n1 + "\n" + n2)
