w = int(input())
n = int(input())
cars = []

for i in range(n):
    cars.append(int(input()))

bridge = []
ans = 0

def bridgeWeight():
    return sum(bridge)

def addCar(n):
    if len(bridge) <= 3:
        # Small enough to add one
        bridge.insert(0, n)
    else:
        # Big enough to pop and add one
        bridge.insert(0, n)
        bridge.pop()

for car in cars:
    if bridgeWeight() > w:
        break
    else:
        addCar(car)
        if bridgeWeight() <= w:
            ans += 1

print(ans)
'''
100
6
50
30
10
10
40
50

100
3
150
1
1
'''