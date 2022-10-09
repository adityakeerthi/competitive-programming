#include <bits/stdc++.h>
using namespace std;

const unsigned int M = 1000000007; 

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, doses(0); cin >> n >> k;
    int heights[n];
    for (int i=0; i<n; i++) {
        cin >> heights[i];
    }

    for (int i=0; i<n; i++) {
        while (k < heights[i]) {
            doses++; k++;
        }
    }

    cout << doses;

    cout << "\n";

}