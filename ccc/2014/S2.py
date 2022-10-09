import sys
n = int(input())
phrase1 = list(input().split())
phrase2 = list(input().split())
pairs1 = []
pairs2 = []

if phrase1 == phrase2:
    print("bad")
    sys.exit()

if n%2==1:
    print("bad")
    sys.exit()

for i in range(n):
    words1 = sorted([phrase1[i], phrase1[n-1-i]])
    pairs1.append(words1)
    words2 = sorted([phrase2[i], phrase2[n-1-i]])
    pairs2.append(words2)

pairs1 = sorted(pairs1)
pairs2 = sorted(pairs2)

if pairs1 != pairs2:
    print("bad")
    sys.exit()

print("good")

'''
4
Ada Alan Grace John
John Grace Alan Ada

7
Rich Graeme Michelle Sandy Vlado Ron Jacob
Ron Vlado Sandy Michelle Rich Graeme Jacob
'''