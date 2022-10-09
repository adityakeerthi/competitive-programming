// May/24/2020 15:28UTC-4 	adityakeerthi 	32B - Borze 	GNU C++17 	Accepted 	62 ms 	0 KB

#include <bits/stdc++.h>

using namespace std;

void solve( string s) {
    string res;

    while (s[0] == '.' || s[0] == '-') {
        if (s[0] == '.') {
            res += '0';
            s.erase(0, 1);
        } else if (s[0] == '-' && s[1] == '.') {
            res += '1';
            s.erase(0, 1);
            s.erase(0, 1);
        } else if (s[0] == '-' && s[1] == '-') {
            res += '2';
            s.erase(0, 1);
            s.erase(0, 1);
        }
    }

    cout << res;
}

int main() 
{
    string s;
    cin >> s;

    solve(s);

}