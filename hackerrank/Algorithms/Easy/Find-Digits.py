def solve():
    t = int(input())
    for i in range(t):
        digS = input()
        digN = int(digS)
        ct = 0
        for i in range(len(digS)):
            if int(digS[i]) != 0:
                if digN % int(digS[i]) == 0:
                    ct += 1
        
        print(ct)

if __name__ == "__main__":
    solve()