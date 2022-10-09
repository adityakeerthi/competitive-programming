n = int(input())
h = list(map(int, input().split()))
w = list(map(int, input().split()))
area = 0
for i in range(n):
    area += ((h[i] + h[i+1])*w[i]) / 2
print(area)
'''
3
2 3 6 2
4 1 1

4
6 4 9 7 3
5 2 4 1
'''