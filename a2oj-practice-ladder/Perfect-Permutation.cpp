// 	 Jun/10/2020 17:11UTC-4 	adityakeerthi 	233A - Perfect Permutation 	GNU C++17 	Accepted 	62 ms 	200 KB

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;

#define appendV push_back

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if (n % 2 == 1) {
        cout << -1 << "\n";
    } else {
        cout << "2 1";
        for (int i = 3; i < n; i += 2) {
            cout << " " << i + 1 << " " << i;
        }
    }

}