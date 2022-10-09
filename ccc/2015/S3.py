'''
The methodology is to check for each gate for each plane starting from the highest possible value gate and descending to 0. 
If you cannot match a plane within that time then all the gates are fill and the program ends.
The most optimal gate for plane X is to dock at a gate X. If this optimal position is searched and then downgraded to X - 1,
we can climb down the ladder of possible solutions to the problem.
- Aditya Keerthi
'''

g = int(input())
p = int(input())
planes = []
for i in range(g+1):
    planes.append(0)
n = 0
res = 0
state = True
while state and n < p:
    plane = int(input())
    while plane > 0 and planes[plane] > 0:
        temp = planes[plane]
        planes[plane] += 1
        plane -= temp
    if plane <= 0:
        state = False
    else:
        res += 1
        planes[plane] = 1
    n+=1

print(res)

'''
4
3
4
1
1

4
6
2
2
3
3
4
4
'''