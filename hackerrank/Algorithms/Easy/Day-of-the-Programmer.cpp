#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int y; cin >> y;

    if (y == 1918) {
        cout << "26.09.1918";
    } else if ((y < 1918 && y % 4 == 0) || (y > 1918 && (y % 4 == 0 && y % 100 != 0)) || y % 400 == 0) {
        cout << "12.09." << y;
    } else {
        cout << "13.09." << y;
    }

    cout << "\n";
    return 0;

}