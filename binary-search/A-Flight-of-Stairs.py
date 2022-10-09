class Solution:
    def solve(self, n):
        tab = []
        m = 1000000007
        for i in range(1, n+1):
            if i == 1:
                tab.append(1)
            elif i == 2:
                tab.append(2)
            else:
                a = i-2
                b = i-3
                tab.append(tab[a] + tab[b])
        return tab[n-1] % m