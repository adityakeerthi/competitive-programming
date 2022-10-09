// Jun/12/2020 19:04UTC-4 	adityakeerthi 	96A - Football 	GNU C++17 	Accepted 	62 ms 	300 KB
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
typedef long long ll;

#define appendv push_back

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input;
    cin >> input;
    int curr = 1;
    for (unsigned int i = 1; i < input.length(); ++i) {
        if (input[i] == input[i - 1]) {
            curr++;
            if (curr == 7) {
                cout << "YES";
                return 0;
            }
        } else {
            curr = 1;
        }
    }

    cout << "NO";

    cout << "\n";
    return 0;

}