#include <bits/stdc++.h>
using namespace std;

const unsigned int mxN = 1000000007; 

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int s, e, d, ct(0); cin >> s >> e >> d;

    for (; s<=e; s++) {
        string num = to_string(s);
        reverse(num.begin(), num.end());
        int newS = stoi(num);
        int diff = abs(s - newS);
        if (diff % d == 0) {
            ct++;
        }
    }
    cout << ct;

    cout << "\n";

}