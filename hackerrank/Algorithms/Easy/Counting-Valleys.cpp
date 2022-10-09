#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, depth(0), valleys(0); cin >> n;
    string sequence; cin >> sequence;

    for (unsigned long long int i=0; i<n; i++) {

        if (sequence[i] == 'U' && i != 0 && depth == -1) {
            valleys++;
        } 

        if (sequence[i] == 'U') {
            depth++;
        } else if (sequence[i] == 'D') {
            depth--;
        }

    }

    cout << valleys;

    cout << "\n";
    return 0;

}