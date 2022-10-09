#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define appendv push_back

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    double n;
    cin >> n;
    double res;

    for (int i = 0; i < n; i++) {
        double temp;
        cin >> temp;
        res += temp;
    }

    cout << res / n;

}