// Jun/10/2020 17:39UTC-4 	adityakeerthi 	61A - Ultra-Fast Mathematician 	GNU C++17 	Accepted 	31 ms 	0 KB
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;

#define appendV push_back
#define forloop(i, a, b) for (int i = a; i <= b; i++)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<bool> num1, num2;

    string n1, n2;

    cin >> n1;
    cin >> n2;

    for (auto n : n1) {
        if (n == '1') {
            num1.appendV(1);
        } else if (n == '0') {
            num1.appendV(0);
        }
    }

    for (auto n : n2) {
        if (n == '1') {
            num2.appendV(1);
        } else if (n == '0') {
            num2.appendV(0);
        }
    }

    vector<bool> res;

    forloop(i, 0, num1.size() - 1) {
        res.appendV(num1[i] ^ num2[i]);
    }
    
    // ^ is a xor operator

    for (auto r : res) {
        cout << r;
    }
   
}