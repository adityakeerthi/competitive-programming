#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, temp, matches(0), l(0); cin >> n;
    vector<int> socks;
    set<int> socktypes;

    for (unsigned int i=0; i<n; i++) {
        cin >> temp;
        socks.push_back(temp);
        socktypes.insert(temp);
    }

    for (auto sock : socktypes) {
        int occurences = count(socks.begin(), socks.end(), sock);
        occurences = occurences / 2;
        matches += occurences;

        l++;
    }

    cout << matches;

    cout << "\n";
    return 0;

}