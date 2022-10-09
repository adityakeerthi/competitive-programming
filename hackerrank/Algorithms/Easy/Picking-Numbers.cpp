#include <bits/stdc++.h>
using namespace std;

const unsigned int M = 1000000007; 

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t, cur(-1), c(1); cin >> n;
    vector<int> list, maxes;

    for (unsigned int i=0; i<n; i++) {
        cin >> t; list.push_back(t);
    }

    sort(list.begin(), list.end());

    for (unsigned int i=0; i<list.size(); i++) {
        
        for (unsigned int j=i+1; j<list.size(); j++) {

            if (j == n - 1) {
                maxes.push_back(c);
            }

            if (abs(list[i] - list[j]) <= 1) {
                c++;
            } else {
                maxes.push_back(c);
                c=1;
                break;
            }
        }
        maxes.push_back(c);
        c=1;
    }

    cout << * max_element(maxes.begin(), maxes.end());

    cout << "\n";

}