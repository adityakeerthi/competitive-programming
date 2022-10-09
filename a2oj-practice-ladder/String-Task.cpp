// Jun/12/2020 19:11UTC-4 	adityakeerthi 	118A - String Task 	GNU C++17 	Accepted 	62 ms 	300 KB
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
typedef long long ll;

#define appendv push_back

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input, vowels, dots, cons;
    cin >> input;

    // delete vowels
    for (unsigned int i = 0; i < input.length(); i++) {
        if (
            input[i] == 'a' || input[i] == 'A' || input[i] == 'e' || input[i] == 'E' || input[i] == 'i' || input[i] == 'I' || input[i] == 'o' || input[i] == 'O' || input[i] == 'u' || input[i] == 'U' || input[i] == 'y' || input[i] == 'Y'
        ) { continue; } else {
            vowels += input[i];
        }
    }

    // consonent dots
    for (unsigned int i = 0; i < vowels.length(); i++) {
        dots += '.';
        dots += tolower(vowels[i]);
    }

    cout << dots;

    cout << "\n";
    return 0;

}