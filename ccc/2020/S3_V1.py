'''
Intuitive solution does not prove to be the best, learn the hashing function.
'''
pal = input()
seq = input()
visited = set()
def generate(sequence):
    paltable = {}
    for char in sequence:
        if char in paltable:
            paltable[char] += 1
        else:
            paltable[char] = 1
    return paltable

palt = generate(pal)

for i in range(len(seq)-len(pal)+1):
    par = seq[i:i+len(pal)]
    part = generate(par)
    if part == palt and par not in visited: # Palindrome detected and not visited yet
        visited.add(par)

print(len(visited))

'''
aab
abacabaa
'''