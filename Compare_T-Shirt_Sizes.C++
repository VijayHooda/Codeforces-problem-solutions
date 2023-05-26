#include <bits/stdc++.h>
 
using namespace std;
 
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(),v.end()
#define eb emplace_back
 
 
void ct(char c) {
    cout << c << '\n';
}
 
void solve() {
    string a,b; cin >> a >> b;
    char ca = a.back();
    char cb = b.back();
    if (ca == cb) {
        if (sz(a) == sz(b)) cout << '=';
        else if (ca == 'S') {
            cout << (sz(a) < sz(b) ? '>' : '<');
        } else {
            cout << (sz(a) < sz(b) ? '<' : '>');
        }
    }else cout << (ca < cb ? '>' : '<');
    cout << '\n';
}
 
int main() {
    int t;
    cin >> t;
 
    forn(ttt, t) {
        solve();
    }
}


