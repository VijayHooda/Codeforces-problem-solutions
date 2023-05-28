#include <bits/stdc++.h>
 
using namespace std;
 
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(),v.end()
#define eb emplace_back
 
 
void ct(int c) {
    cout << c << '\n';
}

int main(){
    int t;
    cin>>t;
    forn(i,t){
        int a,b;
        cin>>a>>b;
        if (a%b!=0)
        {
            ct(1);
            ct(a);
        }
        else
        {
            ct(2);
            cout<<1<<" "<<a-1<<endl;

        }
        
    }
}