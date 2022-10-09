import math

def solve():
    date1 = list(map(int, input().split(' ')))
    date2 = list(map(int, input().split(' ')))
    ddiff = date1[0] - date2[0]
    mdiff = date1[1] - date2[1]
    ydiff = date1[2] - date2[2]

    if ydiff > 0:
        print(10000)
    elif ydiff == 0:
        if mdiff > 0:
            print(mdiff * 500)
        elif mdiff == 0:
            if ddiff > 0:
                print(ddiff * 15)
            elif ddiff <= 0:
                print(0)
        elif mdiff < 0:
            print(0)
    elif ydiff < 0:
        print(0)

if __name__ == "__main__":
    solve()