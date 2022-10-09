#include <bits/stdc++.h>
using namespace std;

const unsigned int mxN = 1000000007; 

#define ll long long

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll int n, k, t; cin >> n >> k;
    ll int difmod[k];
    memset(difmod, 0, sizeof(difmod));

    for (ll int i=0; i<n; i++) {
        cin >> t;
        difmod[t % k]++;
    }

    ll int ct(0);

    if (difmod[0] >= 1) ct++;

    for (ll int i=1; i<=k/2; i++) {
        t = difmod[i];
        if (difmod[k - i] > t) {
            t = difmod[k - i];
        }
        if (k % 2 == 0 && i == k/2 && difmod[k/2] > 0) {
            ct++;
        } else {
            ct+=t;
        }
    }

    cout << ct;

    cout << "\n";

}