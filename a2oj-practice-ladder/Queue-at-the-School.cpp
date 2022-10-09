// May/24/2020 15:05UTC-4 	adityakeerthi 	266B - Queue at the School 	GNU C++17 	Accepted 	62 ms 	100 KB

#include <bits/stdc++.h>

using namespace std;

string iterate(string s, int l) {
    string n = s;
    for (int i = 0; i < l;i++) {
        if (s[i] == 'B') {
            if (s[i + 1]) {
                if (s[i + 1] == 'G') {
                    n[i] = 'G';
                    n[i + 1] = 'B';
                }
            } 
        }
    }

    return n;
}

int main() 
{
    string s;
    int loops, length;
    cin >> length >> loops;
    cin >> s;

    for (int i = 0; i < loops; i++) {
        s = iterate(s, length);
    }
    
    cout << s;

}