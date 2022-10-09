#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, d, m, res(0); cin >> n;
    int arr[n];

    for (unsigned int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cin >> d >> m;

    for (unsigned int i = 0; i < (n - m + 1); i++) {
        int currSum(0);
        for (unsigned int j = 0; j < m; j++) {
            currSum += arr[i + j];
        }
        if (currSum == d) {
            res++;
        }
    }

    cout << res;

    cout << "\n";
    return 0;

}