#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>> array;
    vector<int> tempV;
    int n, q, temp, q1, q2, nn; cin >> n >> q;

    for (unsigned int i = 0; i < n; i++) {
        cin >> nn;
        tempV = {};
        for (unsigned int k = 0; k < nn; k++) {
            cin >> temp;
            tempV.push_back(temp);
        }
        array.push_back(tempV);
    }

    for (unsigned int i = 0; i < q; i++) {
        cin >> q1 >> q2;
        cout << array[q1][q2] << "\n";
    }

    return 0;
}