# Directed graph.
inp = list(map(int, input().split(" ")))
n = inp[0]
m = inp[1]
tallGraph = {} # A node points to a list of nodes that are shorter than it.
shortGraph = {} # A node points to a list of nodes that are taller than it.
for i in range(n):
    tallGraph[i+1] = []
    shortGraph[i+1] = []

for i in range(m):
    inp = list(map(int, input().split(" ")))
    tallGraph[inp[0]].append(inp[1])
    shortGraph[inp[1]].append(inp[0])

inp = list(map(int, input().split(" ")))
p = inp[0]
q = inp[1]

def BFS(graph, start, end):
    visited = set()
    queue = [start]
    while queue:
        node = queue.pop(0)
        if node == end:
            return True
        if node not in visited:
            visited.add(node)
            for n in graph[node]:
                queue.append(n)
    return False

if BFS(tallGraph, p, q):
    print("yes")
elif BFS(shortGraph, p, q):
    print("no")
else:
    print("unknown")

'''
10 3
8 4
3 8
4 2
3 2

10 3
4 8
8 3
2 4
3 2

10 3
3 8
2 8
3 4
3 2
'''