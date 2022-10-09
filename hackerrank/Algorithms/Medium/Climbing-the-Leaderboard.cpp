#include <bits/stdc++.h>
using namespace std;

const unsigned int M = 1000000007; 

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // the reason i used stacks is that the problem already sorts alices scores making this much easier

    int n, m; cin >> n;

    stack<long long int> stck;
    long long int temp;

    for (int i=0; i<n; i++) {
        cin >> temp;

        if (stck.empty() || stck.top() != temp)
            stck.push(temp);    
    }

    cin >> m;

    for (int i=0; i<m; i++) {
        cin >> temp;
        
        while (!stck.empty() && temp >= stck.top()) {
            stck.pop(); // filtering out all the elements before hand
        }

        cout << stck.size() + 1 << "\n";

    }

    cout << "\n";

}