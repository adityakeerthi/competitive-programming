// Jun/02/2020 17:28UTC-4 	adityakeerthi 	320A - Magic Numbers 	GNU C++17 	Accepted 	92 ms 	300 KB

#include <bits/stdc++.h>

using namespace std;

int main() 
{
        long long i;
        string s;
        bool l = true;

        cin >> s;
        for(i=0; i < s.length();) {
            if (s[i]=='1' && s[i+1]=='4'  && s[i+2]=='4') {
                i+=3;
            } else if (s[i]=='1' && s[i+1]=='4') {
                i+=2;
            } else if (s[i]=='1') {
                i++;
            } else {
                l = false;
                break;
            }
        }

        if(l)
            cout<<"YES";
        else
            cout<<"NO";

        return 0;

}