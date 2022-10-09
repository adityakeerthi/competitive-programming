#include <bits/stdc++.h>
using namespace std;

const unsigned int M = 1000000007; 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, A, B, M; cin >> n;

    for (unsigned int i=0; i<n; i++) {
        cin >> A >> B >> M;
        if (abs(M - A) > abs(M - B)) {
            cout << "Cat B" << "\n";
        } else if (abs(M - A) < abs(M - B)) {
            cout << "Cat A" << "\n";
        } else {
            cout << "Mouse C" << "\n";
        }
    }

    return 0;

}