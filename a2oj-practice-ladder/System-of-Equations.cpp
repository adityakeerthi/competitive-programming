// Jun/02/2020 17:48UTC-4 	adityakeerthi 	214A - System of Equations 	GNU C++17 	Accepted 	62 ms 	300 KB

#include <bits/stdc++.h>

using namespace std;

int n, m, s;
int main() {
    cin >> n >> m;
    for (int i = 0; i <= max(n, m); i++) {
        for (int j = 0; j <= max(n, m); j++) {
            if ( ((i * i) + j) == n && ((j * j) + i) == m) {
                s++;
            }
        }
    }
    cout << s;
}