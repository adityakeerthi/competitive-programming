#include <bits/stdc++.h>
using namespace std;

const unsigned int mxN = 1000000007; 

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, shared(5), liked(0); cin >> n;
    for (int i=1; i<=n; ++i) {
        liked += (shared / 2); shared = (shared / 2) * 3;
    }

    cout << liked;

    cout << "\n";

}