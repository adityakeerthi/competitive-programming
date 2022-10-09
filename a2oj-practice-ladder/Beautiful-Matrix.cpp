// May/24/2020 13:48UTC-4 	adityakeerthi 	263A - Beautiful Matrix 	GNU C++17 	Accepted 	62 ms 	0 KB

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int grid [5][5];
    int x, y;

    for (int i = 1; i < 6; i++) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if (a == 1) {
            x = 1;
            y = i;
        } else if (b == 1) {
            x = 2;
            y = i;
        } else if (c == 1) {
            x = 3;
            y = i;
        } else if (d == 1) {
            x = 4;
            y = i;
        } else if (e == 1) {
            x = 5;
            y = i;
        } else {
            continue;
        }
    }
    int final = abs(x - 3) + abs(y - 3);

    cout << final;

}