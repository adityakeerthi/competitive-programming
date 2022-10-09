def solve():
    n = int(input())
    p = list(map(int, input().split(' ')))
    for i in range(n):
        x = p.index(i+1)
        idx = p.index(x+1)
        print(idx+1)

if __name__ == "__main__":
    solve()