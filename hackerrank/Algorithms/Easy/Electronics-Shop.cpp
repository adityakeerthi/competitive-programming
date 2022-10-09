#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int b, n, m; cin >> b >> n >> m;
    int key[n], mouse[m];
    vector<int> maxes;
    bool flag(0);

    for (unsigned int i=0; i<n; i++) {
        cin >> key[i];
    }
    for (unsigned int i=0; i<m; i++) {
        cin >> mouse[i];
    }

    for (unsigned int i=0; i<n; i++) {
        for (unsigned int j=0; j<m; j++) {
            if ((key[i] + mouse[j]) <= b) {
                flag = 1;
                maxes.push_back(key[i] + mouse[j]);
            }
        }
    }

    if (flag) {
        cout << *max_element(maxes.begin(), maxes.end());
    } else {
        cout << -1;
    }

    cout << "\n";
    return 0;

}