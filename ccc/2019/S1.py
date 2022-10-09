s = input()
H = s.count("H") % 2
V = s.count("V") % 2

if H == 1 and V == 1:
    print(4, 3)
    print(2, 1)

elif H == 1 and V == 0:
    print(3, 4)
    print(1, 2)

elif H == 0 and V == 1:
    print(2, 1)
    print(4, 3)

else:
    print(1, 2)
    print(3, 4)