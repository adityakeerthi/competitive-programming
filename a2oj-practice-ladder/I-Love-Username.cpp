// Jun/02/2020 18:11UTC-4 	adityakeerthi 	155A - I_love_\%username\% 	GNU C++17 	Accepted 	62 ms 	300 KB

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, points, count(0);
    cin >> n >> points;
    int min(points), max(points);
    while (--n) {
        cin >> points;
        if (points < min) {
            min = points;
            ++count;
        }
        if (points > max) {
            max = points;
            ++count;
        }
    }
    cout << count;
}