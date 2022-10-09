#include <bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
    int min, max;
    max = abs(*a + *b);
    min = abs(*a - *b);
    cout << max << "\n" << min;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b; cin >> a >> b;
    int *pa = &a, *pb = &b;
    
    update(pa, pb);

    cout << "\n";
    return 0;

}