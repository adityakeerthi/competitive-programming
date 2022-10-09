#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
typedef long long ll;

#define appendv push_back

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int asize, bsize;
    vector<int> a, b, total;
    cin >> asize >> bsize;

    for (unsigned int i = 0; i < asize; i++) {
        int temp(0);
        cin >> temp;
        a.push_back(temp);
        total.push_back(temp);
    }

    for (unsigned int i = 0; i < bsize; i++) {
        int temp(0);
        cin >> temp;
        b.push_back(temp);
        total.push_back(temp);
    }

    vector<int> pos;
    set<int> res;

    for (unsigned int i = a[asize - 1]; i <= b[0]; i++) {
        int less, greater, curr(0);
        for (unsigned int k = 0; k < total.size(); k++) {
            if (i > total[k]) {
                less = total[k];
                greater = i;
            } else {
                less = i;
                greater = total[k];
            }

            if (greater % less == 0) {
                curr++;
            }

        }

        if (curr == total.size()) {
            res.insert(i);
        }

    }

    cout << res.size();

}