#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n, temp; cin >> n;
    set<int> birdtypes;
    vector<int> birdcount, maxescount, maxesbird;

    for (unsigned long long int i=0; i<n; i++) {
        cin >> temp;
        birdtypes.insert(temp);
        birdcount.push_back(temp);
    }

    for (auto c : birdtypes) {
        maxescount.push_back(count(birdcount.begin(), birdcount.end(), c));
        maxesbird.push_back(c);
    }

    // cout << *max_element(maxescount.begin(), maxescount.end());
    // cout << distance(maxescount.begin(), max_element(maxescount.begin(), maxescount.end()));
    cout << maxesbird[distance(maxescount.begin(), max_element(maxescount.begin(), maxescount.end()))];
    cout << "\n";
    return 0;

}