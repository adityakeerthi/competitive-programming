#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, temp; cin >> n;
    int list[n];
    for (unsigned int i = 0; i < n; i++) {
        cin >> temp;
        list[i] = temp;
    }
    reverse(list, list + n);

    for (unsigned int k = 0; k < n; k++) {
        cout << list[k] << " ";
    }


    return 0;
}
