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
        forn(j,n){
            int l;
            l=v[j];
            if (v[j]<0)
            {
                l=v[j]*(-1);
            }
            s+=l;
            
        }
        int d=0,c1=1;
        forn(j,n){
            if (v[j]<0 && c1==1)
            {
                d++;
                c1=0;
                

            }
            else if(v[j]>0)
            {
                c1=1;
            }
        }
        cout<<s<<" "<<d<<endl;


    }
}