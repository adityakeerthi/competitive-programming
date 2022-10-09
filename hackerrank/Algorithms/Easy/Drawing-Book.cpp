#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, p, turns(0), currpage(1); cin >> n >> p;
    set<int> pages;

    if (p % 2 == 0) {
        pages.insert(p); pages.insert(p + 1);
    } else {
        pages.insert(p); pages.insert(p - 1);
    }

    if (abs(p - 1) < abs(p - n)) {
        // go from 1 to p
        while (pages.find(currpage) == pages.end()) {
            currpage += 2;
            turns++;
        }

    } else {
        currpage = n;
        // go from n to p
        while (pages.find(currpage) == pages.end()) {
            currpage -= 2;
            turns++;
        }
    }

    cout << turns;

    cout << "\n";
    return 0;

}