def solve():
    it = list(map(int, input().split(' ')))
    clouds = list(map(int, input().split(' ')))
    n = it[0]
    k = it[1]
    e = 100
    pos = -1
    while (pos == -1 or pos != 0):
        if pos == -1: pos = 0
        pos += k
        pos = pos % n
        if clouds[pos] == 1: e -= (1 + 2)
        else: e -= 1
    
    print(e)

if __name__ == "__main__":
    solve()