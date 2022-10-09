n = input()
hay = input()
alpha = ['a', 'b', 'c', 'd', 'e', 'f',
'g', 'h', 'f', 'i', 'j', 'k', 'l', 'm', 
'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 
'v', 'w', 'x', 'y', 'z']
nmap = {}
haymap = {}
for char in alpha:
    nmap[char] = 0
    haymap[char] = 0
visited = set()
for char in n:
    if char in nmap:
        nmap[char] += 1
    else:
        nmap[char] = 1
ans = 0
for i in range(len(hay) - len(n) + 1):
    subh = hay[i:i+len(n)]
    if i == 0:
        for j in subh:
            if j in haymap:
                haymap[j] += 1
            else:
                haymap[j] = 1
    else:
        add = hay[i+len(subh)-1]
        rem = hay[i-1]
        haymap[rem] -= 1
        haymap[add] += 1
    hashed = hash(subh)
    if nmap == haymap and hashed not in visited:
        visited.add(hashed)
        ans += 1

print(ans)

'''
aab
abacabaa
'''