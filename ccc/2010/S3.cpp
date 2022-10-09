#include <bits/stdc++.h>
using namespace std;

const unsigned int mxN = 1000000007; 
const char newl = '\n';

#define ll long long
#define pb push_back
#define iterX(z) for(int i=0; i<z; i++)

int n, temp, k; cin >> n;
vector<int> houses;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    iterX(n) {
        cin >> temp;
        houses.pb(temp);
    }
    sort(houses.begin(), houses.end());
    cin >> k;
    if (k >= n) {
        cout << 0 << endl;
        return 0;
    }
    cout << houses.size();

    cout << newl;

}

/*
4
0
67000
68000
72000
2
*/