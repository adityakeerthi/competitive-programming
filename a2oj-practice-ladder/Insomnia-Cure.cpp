// Jun/10/2020 23:23UTC-4 	adityakeerthi 	148A - Insomnia cure 	GNU C++17 	Accepted 	62 ms 	300 KB
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;

#define appendv push_back

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int dg = 0;
    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) { dg++; }
    }

    cout << dg;
}