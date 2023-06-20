#include <bits/stdc++.h> 
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(),v.end()
#define eb emplace_back

void ct(long long c) {
    cout << c << endl;
}


int main(){
    int t;
    cin>>t;
    forn(i,t){
        long long n;
        cin>>n;
        long long m=n/2;
        long long s =0;
        s+=n;
        while (m!=0)
        {
            s+=m;
            m/=2;
        }
        ct(s);
        
    
    
    
    }
}