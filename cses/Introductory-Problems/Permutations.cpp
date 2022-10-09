#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n; cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
    } else if (n == 1) {
        cout << "1";
    } else if (n == 4) {
        cout << "2 4 1 3 ";
    } else {
        for (long long int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
        for (long long int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
    }

    cout << "\n";
    return 0;

}