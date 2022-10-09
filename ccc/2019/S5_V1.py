'''
I think the idea was right, but I shouldn't of used a BT. That was just a dumb idea that didn't make the program faster.
'''

inp = list(map(int, input().split()))
n = inp[0]
k = inp[1]
ds = []
trids = []

class Node:
    def __init__(self, value):
        self.val = value
        self.right = None
        self.left = None

    def __repr__(self):
        return str(self.val)

for i in range(n):
    row = list(map(int, input().split()))
    ds.append(row)
    trids.append(row)

for x in range(len(ds)):
    r = ds[x]
    for y in range(len(r)):
        newnode = Node(ds[x][y])
        trids[x][y] = newnode

for x in range(len(trids)-1):
    r = trids[x]
    for y in range(len(r)):
        curnode = trids[x][y]
        try:
            curnode.left = trids[x+1][y]
            curnode.right = trids[x+1][y+1]
        except:
            curnode.left = trids[x+1][y-1]
            curnode.right = trids[x+1][y]

global nodesTRI
nodesTRI = []

def getTriangle(rootnode, k):
    global nodesTRI
    # print(nodesTRI)
    # print(k, rootnode)
    if k != 0:
        if rootnode.val not in nodesTRI:
            nodesTRI.append(rootnode.val)
        if rootnode.left != None:
            getTriangle(rootnode.left, k-1)
        if rootnode.right != None:
            getTriangle(rootnode.right, k-1)

finalAns = 0

for x in range(n-k+1):
    r = trids[x]
    for y in range(len(r)):
        getTriangle(trids[x][y], k)
        finalAns += max(nodesTRI)
        nodesTRI = []

print(finalAns)

'''
4 2
3
1 2
4 2 1
6 1 4 2
'''