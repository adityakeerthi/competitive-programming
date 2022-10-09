n = int(input())
print(0)
a=1
b=3
c=5
for i in range(6, n+5):
    print(i*a)
    a += b
    b += c
    c += 3

'''
0
6
28
96
252
550
1056
1848
'''