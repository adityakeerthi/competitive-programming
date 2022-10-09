#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, t; cin >> n;
    set<long long> visited;

    for (unsigned long long i=0; i<n-1; i++) {
        cin >> t;
        visited.insert(t);
    }

    for (unsigned long long i=1; i<=n; ++i) {
        if (visited.find(i) == visited.end()) {
            cout << i;
        }
    }

    cout << "\n";
    return 0;
}