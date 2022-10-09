#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, a, annas(0); cin >> n >> k;
    int arr[n];

    for (unsigned int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cin >> a;

    for (unsigned int i=0; i<n; i++) {
        if (i != k) {
            annas += arr[i];
        }
    }

    if ((annas / 2) == a) {
        cout << "Bon Appetit";
    } else {
        cout << abs(a - (annas / 2));
    }

    cout << "\n";
    return 0;

}