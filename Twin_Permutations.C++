#include <bits/stdc++.h>
 
using namespace std;
 
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(),v.end()
#define eb emplace_back
 
 
void ct(int c) {
    cout << c << ' ';
}

int main(){
    int t;
    cin>>t;
    forn(i,t){
        int n;
        cin>>n;
        vector<int> a;
        forn(j,n){
            int ai;
            cin>>ai;
            a.push_back(ai);
        }

        forn(j,n){
            int k = (n+1) - a[j];
            ct(k);
        }
        cout<<endl;
    }
}