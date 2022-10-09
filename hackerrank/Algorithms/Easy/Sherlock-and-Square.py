import math

def solve():
    t = int(input())
    for i in range(t):
        it = input().split()
        start = int(it[0])
        end = int(it[1])
        ct = math.floor(math.sqrt(end)) - math.floor(math.sqrt(start - 1))
        print(ct)

if __name__ == "__main__":
    solve()