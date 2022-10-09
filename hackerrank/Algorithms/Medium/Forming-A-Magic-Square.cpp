#include <bits/stdc++.h>
using namespace std;

const unsigned int M = 1000000007; 
typedef vector<vector<int>> matrix;

int calculateCost(matrix a, matrix b) {
    int sum(0);
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            sum += abs(a[i][j] - b[i][j]);
        }
    }
    return sum;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    matrix input;
    int cost(M), temp;

    for (int i=0; i<3; i++) {
        vector<int> current;
        for (int i=0; i<3; i++) {
            cin >> temp;
            current.push_back(temp);
        }
        input.push_back(current);
        current.clear();
    }

    vector<matrix> poss = {
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}}, 
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}, 
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}}, 
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}}, 
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}}
    };

    for (auto cur : poss) {
        cost = min(cost, calculateCost(input, cur));
    }

    cout << cost;

    cout << "\n";

}