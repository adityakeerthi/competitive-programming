from math import sqrt, floor
t = int(input())
def isPrime(n):
    for i in range(2, int(floor(sqrt(n)))+1):
        if n % i == 0:
            return False
    return True
for i in range(t):
    n = int(input())
    added = n*2
    for a in range(2, added+1):
        if isPrime(a):
            atemp = added - a
            if isPrime(atemp):
                print(a, atemp)
                break
'''
4
8
4
7
21
'''