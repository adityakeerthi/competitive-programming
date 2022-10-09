#include <bits/stdc++.h>

using namespace std;

bool isDistinct(int year) {
    string s = to_string(year);

    if (s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] && s[2] != s[3]) {
        return 0;
    } else {
        return 1;
    }

}

void solve(int year) {
    year += 1;

    while (isDistinct(year)) {
        year += 1;
    }

    cout << year;

}

int main() 
{
    int year;
    cin >> year;

    solve(year);
}