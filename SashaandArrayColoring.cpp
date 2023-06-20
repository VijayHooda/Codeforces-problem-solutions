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
        int n;
        cin>>n;
        vector<int> v;
        forn(j,n){
            int l;
            cin>>l;
            v.push_back(l);

        }
        long long s=0;
        sort(v.begin(),v.end());
        int m;
        m=n/2;
        if (n%2==0)
        {
            forn(j,m){
            s+=v[2*m-j-1]-v[j];

        }
        }


        else{
        forn(j,m){
            s+=v[2*m-j]-v[j];
        }

        }
        ct(s);

    }
}