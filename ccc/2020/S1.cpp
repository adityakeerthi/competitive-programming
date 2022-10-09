#include <bits/stdc++.h>
using namespace std;

const unsigned int mxN = 1000000007; 
const char newl = '\n';

#define ll long long
#define ld long double
#define pb push_back
#define iterX(z) for(int i=0; i<z; i++)

long double calculateV(pair<long double, long double> o1, pair<long double, long double> o2) {
    long double dt = o2.first - o1.first;
    long double dx = o2.second - o1.second;
    if (dx < 0) {
        dx*=-1.0;
    }
    return dx/dt;
};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<long double, long double>> observations;
    int n; cin >> n;
    long double speed(-1.0);
    for (int i = 0; i<n; i++) {
        long double t, x; cin >> t >> x;
        pair<long double, long double> temp = {t, x};
        observations.pb(temp);
    }

    sort(observations.begin(), observations.end());

    for (int i=0; i<(n-1); i++) {
        long double velocity = calculateV(observations[i], observations[i+1]);
        if (velocity > speed) {
            speed = velocity;
        }
    }
    
    cout << speed;

    cout << newl;
}

/*
3
0 100
20 50
10 120

5
20 -5
0 -17
10 31
5 -3
30 11
*/