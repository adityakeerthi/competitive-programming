#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n(0), changes(0); cin >> n;
    int arr[n];
    for (long long int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (long long int i = 0; i < n; i++) {
        if (i != 0) {
            while (arr[i] < arr[i - 1]) {
                changes++;
                arr[i]++;
            }
        }
    }

    cout << changes;

    cout << "\n";
    return 0;

}