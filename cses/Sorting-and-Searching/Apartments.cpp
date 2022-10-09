#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m, k, temp, papplicant(0), papartment(0), res(0); cin >> n >> m >> k;
    vi applicant, apartment;

    for (int i=0; i<n; i++) {
        cin >> temp;
        applicant.pb(temp);
    }

    for (int i=0; i<m; i++) {
        cin >> temp;
        apartment.pb(temp);
    }
    sort(applicant.begin(), applicant.end());
    sort(apartment.begin(), apartment.end());

    while (papplicant < n && papartment < m) {
        if (applicant[papplicant]-k <= apartment[papartment] && applicant[papplicant]+k >= apartment[papartment]) {
            res++;
            papplicant++;
            papartment++;
        } else if (applicant[papplicant]-k <= apartment[papartment]) {
            papplicant++;
        } else if (applicant[papplicant]+k >= apartment[papartment]) {
            papartment++;
        }
    }

    cout << res;

    cout << "\n";
    return 0;

}