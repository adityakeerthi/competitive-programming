j = int(input())
a = int(input())
jerseys = []
for i in range(j):
    jerseys.append(input())
ans = 0
for i in range(a):
    request = input().split()
    size = request[0]
    idx = int(request[1]) - 1
    if jerseys[idx] != "T": # Not taken yet
        if size == "S" or size == jerseys[idx] or (size == "M" and jerseys[idx] == "L"):
            ans += 1
            jerseys[idx] = "T" # Taken

print(ans)

'''
4
3
M
S
S
L
L 3
S 3
L 1
'''