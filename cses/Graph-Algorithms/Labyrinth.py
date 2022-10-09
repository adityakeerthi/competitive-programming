# n is height, m is width
inp = list(map(int, input().split(" ")))
n, m = inp[0], inp[1]
start = ()
end = ()
graph = [[0 for i in range(m)] for j in range(n)]
for i in range(n):
    graph[i] = list(input())
    if "A" in graph[i]:
        start = (i, graph[i].index("A"))
    if "B" in graph[i]:
        end = (i, graph[i].index("B"))

def pathfinder(graph, start, end):
    queue = []
    queue.append(start)
    visited = set()
    visited.add(start)
    while queue:
        node = queue.pop(0)
        if node == end:
            return 


print(graph, start, end)

'''
5 8
########
#.A#...#
#.##.#B#
#......#
########
'''