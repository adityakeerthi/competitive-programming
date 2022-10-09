#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <map>
#include <iomanip>
#define ll long long
#define ld long double
#define PI pair<int, int>
#define pb push_back
#define iterX(z) for(int i=0; i<z; i++)
#define findV(vctr, item) (find(vctr.begin(), vctr.end(), item) == vctr.end())
using namespace std;
const unsigned int mxN = 1000000007; 
const char newl = '\n';
char _; 

int n, m, a;
bool isValid(int row, int col) {
	if (row >= n || row < 0 || col >= m || col < 0) return false;
	return true;
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	vector<vector<int>> grid(n); vector<vector<bool>> visited(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j  <m; j++)  {
			visited[i].pb(false);
			cin >> a;
			grid[i].pb(a);
		}
	}
	queue<pair<int, int>> q; q.push({0, 0});
	bool ans = false;
	while (!ans && !q.empty()) {
		pair<int, int> val = q.front(); q.pop();
		int f = val.first; int s = val.second;
		if (visited[f][s]) {continue;}
		if (f == n-1 && s == m-1) {
			ans = true;
			continue;
		}
		visited[f][s] = true;
		int currentValue = grid[f][s];
		int maxValue = sqrt(currentValue);
		for (int i = 1; i <= maxValue; i++) {
			if (currentValue % i == 0) {
				int row = currentValue / i;
				int col = i;
				row--; col--;
				if (isValid(row, col) && !visited[row][col]) {
					q.push({row, col});
				}
				if (isValid(col, row) && !visited[col][row]) {
					q.push({col, row});
				}
			}
		}
	}
	if (ans) {
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}
	return 0;
}