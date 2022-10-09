class Solution:
    def solve(self, contacts):
        visited = set()
        if len(contacts) == 0:
            return 0
        t = 0
        for i in range(len(contacts)):
            add = True
            contactTwo = contacts[i]
            for l in range(len(contactTwo)):
                c = contactTwo[l]
                if c in visited:
                    add = False
                else:
                    visited.add(c)
            if add:
                t += 1

        return t