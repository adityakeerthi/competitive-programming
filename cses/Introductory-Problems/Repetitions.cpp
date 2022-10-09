#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> maxes;
    int currmax(1);
    string sequence; cin >> sequence;
    char prev, curr;

    for (unsigned long long i = 0; i <= sequence.length(); i++) {
        if (i == 0) {
            prev = curr = sequence[i];
        } else {
            curr = sequence[i];
            if (curr == prev) {
                currmax++;
            } else {
                maxes.push_back(currmax);
                currmax = 1;
            }
            prev = curr;
        }
    }

    cout << *max_element(maxes.begin(), maxes.end());

    cout << "\n";
    return 0;
}