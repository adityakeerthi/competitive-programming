#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, temp; cin >> n;
    set<int> s;

    for (unsigned int i=0; i<n; i++) {
        cin >> temp; s.insert(temp);
    }

    cout << s.size();

    cout << "\n";
    return 0;

}