// Jun/02/2020 17:02UTC-4 	adityakeerthi 	318A - Even Odds 	GNU C++17 	Accepted 	62 ms 	0 KB

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2) {
        cout << k * 2 - 1 << endl;
    }
    else {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;


}