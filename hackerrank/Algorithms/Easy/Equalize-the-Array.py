def solve():
    n = int(input())
    arr = list(map(int, input().split(' ')))
    setarr = list(set(arr))
    x = -1
    y = -1
    for i in setarr:
        if arr.count(i) > x:
            x = arr.count(i)
            y = i

    print(len(arr) - x)

if __name__ == "__main__":
    solve()