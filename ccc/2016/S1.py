from sys import exit
a = list(input())
b = list(input())
a.sort()
b.sort()
if (b.count("*") == 0) and (a != b):
    print("N")
    exit()
atemp = a
btemp = b
missingCharacters = 0
for i in range(len(atemp)):
    char = atemp.pop(0)
    if char in btemp:
        btemp.remove(char)
    else:
        missingCharacters += 1
if b.count("*") < missingCharacters:
    print("N")
    exit()
print("A")

'''
abba
baaa

cccrocks
socc*rk*

cccrocks
aaaaaaa*
'''