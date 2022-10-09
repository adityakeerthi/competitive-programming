#include <bits/stdc++.h>
using namespace std;

const unsigned int mxN = 1000000007; 

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t, sum(1); cin >> n;
    for (int i=0; i<n; i++) {
        cin >> t;
        for (int j=0; j<=t; ++j) {
            if (j == 0) {
                sum = 1;
            } else if (j%2==0) {
                sum += 1;
            } else {
                sum = sum * 2;
            }
        }
        cout << sum << "\n";
        sum = 1;
    }
}