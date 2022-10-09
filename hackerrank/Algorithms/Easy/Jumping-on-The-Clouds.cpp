#include <bits/stdc++.h>
using namespace std;

const unsigned int mxN = 1000000007; 
const char newl = '\n';

#define ll long long

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int clouds[n];
    for (int i=0; i<n; i++) {
        cin >> clouds[i];
    }
    int pos(n-1), jumps(0);
    while (pos != 0) {
        if (pos-2 > -1 && clouds[pos-2] == 0) {
            pos -= 2;
            jumps++;
        } else {
            pos--;
            jumps++;
        }
    }
    cout << jumps;

    cout << newl;

}