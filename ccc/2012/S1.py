from math import factorial

n = int(input())
if n < 4:
    print(0)
else:
    ans = factorial(n-1)/(factorial(3)*factorial(n-4))
    print(int(ans))