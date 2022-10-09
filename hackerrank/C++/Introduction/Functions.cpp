#include <bits/stdc++.h>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    int res[4] = {a, b, c, d};
    return *max_element(res, res + 4);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, d; cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    cout << ans;
    cout << "\n";
    return 0;

}