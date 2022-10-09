#include <bits/stdc++.h>
using namespace std;

const unsigned int M = 1000000007; 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n, m, c(0), t; cin >> n >> m;
    multiset<long long int, greater<int>> tickets;

    while (n--) {
        cin >> t;
        tickets.insert(t);
    }

    while (m--) {
        cin >> c;
        auto i = tickets.lower_bound(c);
        if (i == tickets.end()) {
            cout << -1 << "\n";
        } else {
            cout << *i << "\n";
            tickets.erase(i);
        }
    }

    return 0;

}