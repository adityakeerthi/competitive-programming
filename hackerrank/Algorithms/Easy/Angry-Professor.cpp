#include <bits/stdc++.h>
using namespace std;

const unsigned int mxN = 1000000007; 

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, k, arrived(0); cin >> t;
    for (int i=0; i<t; i++) {
        cin >> n >> k;
        int a[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        for (int i=0; i<n; i++) {
            if (a[i] <= 0) {
                arrived++;
            }
        }
        if (arrived >= k) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        }
        arrived = 0;
    }
}