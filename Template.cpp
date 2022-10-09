#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define PI pair<int, int>
#define pb push_back
#define iterX(z) for(int i=0; i<z; i++)
#define findV(vctr, item) (find(vctr.begin(), vctr.end(), item) == vctr.end())
typedef long long LL; 
typedef pair<int, int> pii; 
typedef pair<LL, LL> pll; 
typedef pair<string, string> pss; 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef vector<pii> vii; 
typedef vector<LL> vl; 
typedef vector<vl> vvl; 
typedef unordered_set<int> si;
typedef set<si> sii;
typedef vector<string> vs;
template<typename K, typename V>
void print_map(map<K,V> const &m);
template<typename Container>
void print_vector(Container v);
void print_set(si s);
using namespace std;
const unsigned int mxN = 1000000007; 
const char newl = '\n';
char _;

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    cout << newl;

}

template<typename Container>
void print_vector(Container v){
    cout << "[" ;
    for (int i = 0; i < v.size() - 1; i++){
        cout << v[i] << ", ";
    }
    cout << v[v.size() - 1] << "]" << "\n";
}

void print_set(si s){
    vi v(s.begin(), s.end());    
    print_vector(v);
}

template<typename K, typename V>
void print_map(map<K,V> const &m)
{
    for (auto const& pair: m) {
        std::cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
}