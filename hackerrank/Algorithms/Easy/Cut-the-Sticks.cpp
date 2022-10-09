#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, temp; cin >> n;
    multiset<int> arr;
    for (unsigned int i=0; i<n; i++) {
        cin >> temp;
        arr.insert(temp);
    }
    auto it = arr.upper_bound(0);
    cout << arr.size() << "\n";
    while (!arr.empty()) {
        it = arr.upper_bound(0);
        int num = *it;
        while (find(arr.begin(), arr.end(), num) != arr.end()) {
            // it's in the multiset
            arr.erase(find(arr.begin(), arr.end(), num));
        }
        if (arr.size() == 0) {
            break;
        }
        cout << arr.size() << "\n";
    }

    return 0;

}