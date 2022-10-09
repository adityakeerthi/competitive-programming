n = int(input())
data = list(map(int, input().split()))
data.sort()
if n % 2 == 1:
    lowt = data[:(n//2)+1]
    hight = data[(n//2)+1:]
else:
    lowt = data[:(n//2)]
    hight = data[(n//2):]
newdata = []
lowt.sort(reverse=True)
i=0
while len(lowt) != 0 or len(hight) != 0 and i <= n:
    if i % 2 == 0:
        try: newdata.append(lowt.pop(0))
        except: pass
    else:
        try: newdata.append(hight.pop(0))
        except: pass
    i += 1
print(*newdata)

'''
7
10 50 40 7 3 110 90

8
10 50 7 40 110 3 2 90
'''