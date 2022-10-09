// Jun/12/2020 20:01UTC-4 	adityakeerthi 	230A - Dragons 	GNU C++17 	Accepted 	62 ms 	300 KB
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long int s, n, x, y;
    pair<int, int> array[10000];
    bool flag;

    while (cin >> s >> n) {
        for (int i = 0; i < n; i++) {
            cin >> array[i].first >> array[i].second;
        }

        flag = 1;

        sort(array, array + n);

        for (int i = 0; i < n; i++) {
            if (s <= array[i].first) {
                flag = 0;
                break;
            } else {
                s += array[i].second;
            }
        }

        if (flag == 0) {
            cout << "NO";
        } else {
            cout << "YES";
        }
    }

    cout << "\n";
    return 0;

}