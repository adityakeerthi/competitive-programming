#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
typedef long long ll;

#define appendv push_back

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, highest(0), lowest(0);
    cin >> n;

    for (unsigned int i = 0, h(0), l(0), curr; i < n; i++) {
        cin >> curr;
        if (i == 0) {
            h = curr; l = curr;
        } else if (curr > h) {
            h = curr;
            highest++;
        } else if (curr < l) {
            l = curr;
            lowest++;
        }
    }

    cout << highest << " " << lowest;

    return 0;

}