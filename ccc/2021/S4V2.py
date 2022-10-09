inp = list(map(int, input().split()))
n, w, d = inp[0], inp[1], inp[2]
oneways = []
for i in range(w):
    inp = list(map(int, input().split()))
    oneways.append(tuple([inp[0], inp[1]]))
init = list(map(int, input().split()))
swapidx = []
for i in range(d):
    inp = list(map(int, input().split()))
    swapidx.append(tuple([inp[0]-1, inp[1]-1]))

def swapAB(graph, a, b):
    tempa = graph[a]
    graph[a] = graph[b]
    graph[b] = tempa
    return graph

def shortestPath(graph, n):
    start = graph[0]
    neighbours = [graph[1]]
    for w in oneways:
        if w[0] == start: neighbours.append(w[1])
    queue = []
    visited = []
    for neigh in neighbours:
        queue.insert(0, tuple([1, neigh]))
    length = 0
    found = False
    while len(queue) != 0 and not found:
        tup1 = queue.pop()
        distance = tup1[0]
        train = tup1[1]
        visited.append(train)
        if train == n:
            found = True
            length = distance
        else:
            for w in oneways:
                if w[0] == train and w[1] not in visited: 
                    queue.insert(0, tuple([distance+1, w[1]]))
                    visited.append(w[1])
            if graph[graph.index(train)-1] not in visited:
                queue.insert(0, tuple([distance+1, graph[graph.index(train)-1]]))
                visited.append(graph[graph.index(train)-1])
            if graph[graph.index(train)+1] not in visited:
                queue.insert(0, tuple([distance+1, graph[graph.index(train)-1]]))
                visited.append(graph[graph.index(train)+1])

    return length

graph = init
for swap in swapidx:
    graph = swapAB(graph, swap[0], swap[1])
    print(shortestPath(graph, n))

# print(shortestPath(init, n))

'''
4 3 3
1 2
3 4
4 1
1 4 3 2
3 4
4 2
3 2
'''