// May/24/2020 15:49UTC-4 	adityakeerthi 	282A - Bit++ 	GNU C++17 	Accepted 	31 ms 	0 KB

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    string curr;
    cin >> n;
    
    int l [n];
    int i = 0;
    while (n--) {
        cin >> curr;
        if (curr == "X++" || curr == "++X") {
            l[i] = 1;
        } else if (curr == "X--" || curr == "--X") {
            l[i] = -1;
        }
        i++;
    }

    int res = 0;

    for (auto i : l ) {
        res += i;
    }

    cout << res;

}