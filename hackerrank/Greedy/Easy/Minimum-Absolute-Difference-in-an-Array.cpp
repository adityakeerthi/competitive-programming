#include <bits/stdc++.h>
using namespace std;

const unsigned int mxN = 1000000007; 

#define ll long long

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll int n, mini(1000000000); cin >> n; int arr[n];
    for (ll int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (ll int i=0; i<n-1; i++) {
        int t = abs(arr[i] - arr[i+1]);
        if (t < mini) mini = t;
    }
    cout << mini;

    cout << "\n";
}