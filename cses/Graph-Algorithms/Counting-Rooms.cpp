#include <bits/stdc++.h>
using namespace std;

const unsigned int mxN = 1000000007; 
const char newl = '\n';

#define ll long long

int n, m;
bool visited[1001][1001];
char grid[1001][1001];

bool isPossible(int x, int y) { // bool to check if we can search or if it's already visited
    if (x < 0 || x > n - 1 || y < 0 || y > m - 1) return 0;
    if (visited[x][y] || grid[x][y] == '#') return 0;
    return 1;
}

void DFS(int x, int y) { // dfs to next neighbour
    visited[x][y] = 1;
    // only four neighbours up, down, left right
    if (isPossible(x + 1, y)) DFS(x + 1, y);
    if (isPossible(x - 1, y)) DFS(x - 1, y);
    if (isPossible(x, y + 1)) DFS(x, y + 1);
    if (isPossible(x, y - 1)) DFS(x, y - 1);
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int rooms = 0;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> grid[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (grid[i][j] == '.' && !visited[i][j]) { // look around when find floor
                DFS(i, j), rooms++; 
            }
        }
    }    
    cout << rooms;
    cout << newl;

}