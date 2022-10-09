#include <bits/stdc++.h>
using namespace std;

const unsigned int mxN = 1000000007; 

#define ll long long

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll int t, n, m, s; cin >> t;

    while (t--) {
        cin >> n >> m >> s;
        cout << (n + ( (s-1) + (m%n) - 1)) % n + 1 << "\n";
    }

}