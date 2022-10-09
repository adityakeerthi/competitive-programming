import math

n = int(input())

friends = []
mx = 0
mn = 200001

for i in range(n):
    inp = list(map(int, input().split()))
    friends.append(inp)
    if inp[0] > mx: mx = inp[0]
    if inp[0] < mn: mn = inp[0]

def time(c):
    totalsteps = 0
    for friend in friends:
        p, w, d = friend[0], friend[1], friend[2]
        leftD = c - d
        rightD = c + d
        if leftD < p and p < rightD: continue
        steps = min(abs(p - leftD), abs(p - rightD))
        totalsteps += steps * w
    return totalsteps

def lr():
    ltime = time(currentpos-1)
    rtime = time(currentpos+1)

    if currenttime <= ltime and currenttime <= rtime: return 0 # HE IS IN
    elif ltime < rtime: return -1 # Go left
    else: return 1 # Go righterino

currentpos = int((mx+mn)/2)
currenttime = time(currentpos)
direction = lr()

# binary search
while True:
    if direction == -1: # Go left
        mx = currentpos
        currentpos = int((mx+mn)/2)
    elif direction == 1: # Go right
        mn = currentpos
        currentpos = int((mx+mn)/2)
    else: break # you are in 

    currenttime = time(currentpos)
    direction = lr()

print(currenttime)

'''
1
0 1000 0

2
10 4 3
20 4 2

3
6 8 3
1 4 1
14 5 2
'''