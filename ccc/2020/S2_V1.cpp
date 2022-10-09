#include <bits/stdc++.h>
using namespace std;

const unsigned int mxN = 1000000007; 
const char newl = '\n';

#define ll long long
#define ld long double
#define pb push_back
#define iterX(z) for(int i=0; i<z; i++)
#define findV(vctr, item) (find(vctr.begin(), vctr.end(), item) == vctr.end())


/*
I perform a classic BFS that searches for the path that will lead the person to finish the Escape Room.
The score I received on this submission was 11/15 and I got runtime errors for the last few. 
I'm going to try another submission where I try and optimize this solution.
*/

int grid[1001][1001];

double m, n, t;
bool ans(false);

bool isValid(pair<double, double> coordinates) {
    if (coordinates.first <= m && coordinates.second <= n) {
        return true;
    }
    return false;
};

vector<pair<double, double>> factors (double n) {
    vector<pair<double, double>> res = {};
    set<pair<double, double>> visited;
    for (double i=1; i<(floor(sqrt(n)) + 1); i++) {
        double t = n/i;
        if (t == floor(t)) {
            pair<double, double> p1 = {floor(t), i};
            pair<double, double> p2 = {i, floor(t)};
            if (findV(visited, p1)) {
                res.pb(p1);
                visited.insert(p1);
            }
            if (findV(visited, p2)) {
                res.pb(p2);
                visited.insert(p2);
            }
        }
    }
    return res;
};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> m; cin >> n;

    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            cin >> t;
            grid[i][j] = t;
        }
    }

    queue<pair<double, double>> q;
    set<pair<double, double>> visited;
    q.push({1, 1});
    visited.insert({1, 1});

    while (!q.empty() && !ans) {
        pair<double, double> coords = q.front();
        q.pop();
        int f = coords.first; int s = coords.second;
        int value = grid[f][s];
        vector<pair<double, double>> possibleJumps = factors(value);
        for (auto jump : possibleJumps) {
            if (isValid(jump) && findV(visited, jump)) {
                if (jump.first == m && jump.second == n) {
                    ans = true;
                }
                visited.insert(jump);
                q.push(jump);
            }
        }
    };

    if (ans) {
        cout << "yes";
    } else {
        cout << "no";
    }

    cout << newl;

}

/*
3
4
3 10  8 14
1 11 12 12
6  2  3  9
*/