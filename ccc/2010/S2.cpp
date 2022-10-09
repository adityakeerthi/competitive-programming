#include <bits/stdc++.h>
using namespace std;

const unsigned int mxN = 1000000007; 
const char newl = '\n';

#define ll long long

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string letter, code, ans, decode = "";
    vector<pair<string, string>> values;

    for (int i = 0; i < n; i++) {
        cin >> letter >> code;
        values.push_back({letter, code});
    }

    cin >> decode;
    string cur = "";

    for (int i = 0; i < decode.length(); i++) {
        cur += decode[i];
        for (pair<string, string> val : values) {
            if (val.second == cur) {
                ans += val.first;
                cur = "";
            }
        }
    }

    cout << ans;

    cout << newl;

}

/*
5                                 
A 00
B 01
C 10
D 110
E 111
00000101111
*/