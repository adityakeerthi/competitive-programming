#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define PI pair<int, int>
#define pb push_back
#define iterX(z) for(int i=0; i<z; i++)
#define findV(vctr, item) (find(vctr.begin(), vctr.end(), item) == vctr.end())
using namespace std;
const unsigned int mxN = 1000000007; 
const char newl = '\n';

map<int, int> rows, cols;

int m, n, k, choice;
char temp;

int ans;
int main() {
    cin >> m >> n >> k;
    for (int i = 0; i < k; i++) {
        cin >> temp >> choice;
        choice = choice-1;
        if (temp == 'R') {
            rows[choice]++;
        } else {
            cols[choice]++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int s = 0;
            if (cols.find(i) != cols.end()) {
                s = s + cols[i];
            } 
            if (rows.find(j) != rows.end()) {
                s = s + rows[j];
            }
            if (s%2 == 1) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}

/*
3
3
2
R 1
C 1

4
5
7
R 3
C 1
C 2
R 2
R 2
C 1
R 4
*/