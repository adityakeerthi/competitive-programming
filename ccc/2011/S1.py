n = int(input())
txt = ""
for i in range(n):
    a = input()
    txt += a

toccur = txt.count("T") + txt.count("t")
soccur = txt.count("S") + txt.count("s")

if toccur > soccur:
    print("English")
else:
    print("French")

'''
3
The red cat sat on the mat.
Why are you so sad cat?
Don’t ask that.

3
Lorsque j’avais six ans j’ai vu, une fois,
une magnifique image,
dans un livre
'''