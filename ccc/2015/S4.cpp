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

/*
Graph Theory Problem looking to find the cheapest path around an archipelago.
Alteration of Djikstra's Algorithm.
*/

struct Node {
    int v = -1;
    int t = -1;
    int h = -1;
};

int k, n, m;
Node adjM[2001][2001];

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> k >> n >> m;
    iterX(m) {
        int a, b, t, h;
        cin >> a >> b >> t >> h;
        Node node;
        node.t = t;
        node.h = h;
        adjM[a][b] = node;
    }
    int start, end; cin >> start >> end;
    Node test = adjM[1][1];
    cout << test.t << test.h;
    Node t = adjM[3][1];
    cout << t.t << t.h;

    cout << newl;

}

/*
10 4 7
1 2 4 4
1 3 7 2
3 1 8 1
3 2 2 2
4 2 1 6
3 4 1 1
1 4 6 12
1 4

3 3 3
1 2 5 1
3 2 8 2
1 3 1 3
1 3
*/