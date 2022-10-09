#include <bits/stdc++.h>
using namespace std;

const unsigned int mxN = 1000000007; 
const char newl = '\n';

#define ll long long

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    int coins[m];
    for (unsigned int i=0; i<m; i++) {
        cin >> coins[i];
    }
    int dp[m+1][n+1];
    for (int i=0; i<(m+1); i++) {
        for (int j=0; j<(n+1); j++) {
            if (j==0) dp[i][j] = 1;
            else if (i==0) dp[i][j] = 0;
            else {
                if (j-coins[i-1] < 0) {
                    dp[i][j] = dp[i-1][j];
                } else {
                    dp[i][j] = dp[i-1][j] + dp[i][j-coins[i-1]];
                }
            }
        }
    }
    cout << dp[m+1][n+1];

    cout << newl;

}