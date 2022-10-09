import math
# use python becauase strings lol *do after dinner*
def solve():
    s = str(input())
    r = int(input())
    socc = s.count('a')
    lens = len(s)
    occ = math.floor(r/lens) * socc
    left = r % lens
    for i in range(left):
        if s[i] == 'a':
            occ += 1

    print(occ)

if __name__ == "__main__":
    solve()