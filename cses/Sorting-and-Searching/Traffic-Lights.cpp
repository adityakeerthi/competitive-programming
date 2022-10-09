#include <bits/stdc++.h>
using namespace std;

const unsigned int M = 1000000007; 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int x, n, t, cur(1); cin >> x >> n;
    vector<int> lights, maxes;

    for (unsigned long long int i=1; i<=x; ++i) {
        lights.push_back(0);
    }

    for (unsigned long long int i=0; i<n; i++) {
        cin >> t;
        lights[t-1] = 1;
        
        for (unsigned long long int i=0; i<lights.size(); i++) {
            if (lights[i] == 1 || i == lights.size() - 1) {
                maxes.push_back(cur);
                cur = 1;
            } else {
                cur++;
            }
        }

        cout << *max_element(maxes.begin(), maxes.end());
        maxes.clear();

    }

    cout << "\n";
    return 0;

}