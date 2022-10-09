def solve():
    n = int(input())
    cupcakes = list(map(int, input().split(' ')))
    cupcakes.sort()
    cupcakes.reverse()
    ct = 0
    for i in range(n):
        ct += (2**i) * (cupcakes[i])
    
    print(ct)

if __name__ == "__main__":
    solve()