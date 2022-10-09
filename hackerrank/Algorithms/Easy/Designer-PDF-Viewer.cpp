#include <bits/stdc++.h>
using namespace std;

const unsigned int M = 1000000007; 

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<char, int> dict;
    int ct(0);
    vector<int> maxes;
    char cur;
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (int i=0; i<26; i++) {
        cin >> dict[alphabet[i]];
    }

    while (cin >> cur) {
        ct++;
        maxes.push_back(dict[cur]);
    }

    cout << *max_element(maxes.begin(), maxes.end()) * ct;

    cout << "\n";

}