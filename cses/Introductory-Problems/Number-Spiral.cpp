#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // odd goes left to right
    // even goes top to bottom

    long long int n, x, y; cin >> n;

    for (long long int i=0; i<n; i++) {
        cin >> x >> y;

        if (x > y) {
            if (x % 2 == 0) {
                cout << (x * x) - y + 1 << "\n";
            } else {
                x--;
                cout << (x * x) + y << "\n";
            }
        } else {
            if (y % 2 == 0) {
                y--;
                cout << (y * y) + x << "\n";
            } else {
                cout << (y * y) - x + 1 << "\n";
            }
        }

    }

    cout << "\n";
    return 0;

}