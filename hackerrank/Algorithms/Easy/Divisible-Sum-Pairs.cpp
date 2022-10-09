#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, res(0); cin >> n >> k;
    int arr[n];
    set<pair<int, int>> visited;

    for (unsigned int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for (unsigned int i=0; i<n; i++) {
        for (unsigned int j=0; j<n; j++) {
            if (i != j) {
                if ((arr[i] + arr[j]) % k == 0) {
                    res++;
                }
            }
        }
    }

    cout << res / 2;

    cout << "\n";
    return 0;

}