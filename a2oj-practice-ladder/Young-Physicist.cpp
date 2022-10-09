// May/24/2020 12:51UTC-4 	adityakeerthi 	69A - Young Physicist 	GNU C++17 	Accepted 	62 ms 	0 KB

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, x, y, z, xsum(0), ysum(0), zsum(0);

    cin >> n;

    while (n--)
    {
        cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }

    if (xsum == 0  && ysum == 0 && zsum == 0) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

}