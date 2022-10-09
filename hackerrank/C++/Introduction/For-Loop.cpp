#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
typedef long long ll;

#define appendv push_back

void numberto(int n) {
    if (n == 1) cout << "one";    
    if (n == 2) cout << "two";    
    if (n == 3) cout << "three";    
    if (n == 4) cout << "four";    
    if (n == 5) cout << "five";    
    if (n == 6) cout << "six";    
    if (n == 7) cout << "seven";    
    if (n == 8) cout << "eight";    
    if (n == 9) cout << "nine";    
    if (n > 9) cout << "Greater than 9";   
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int first, second; cin >> first >> second;

    for (first; first <= second; first++) {
        if (first > 9) {
            if (first == second) {
                if (first % 2 == 0) {
                    cout << "even";
                } else if (first % 2 == 1) {
                    cout << "odd";
                }
            } else {
                if (first % 2 == 0) {
                    cout << "even \n";
                } else if (first % 2 == 1) {
                    cout << "odd \n";
                }
            }
        }
        else {
            numberto(first);
            cout << "\n";
        }
    }

    cout << "\n";
    return 0;

}