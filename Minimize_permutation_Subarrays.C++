#include <bits/stdc++.h>
 
using namespace std;
 
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(),v.end()
#define eb emplace_back
 
 
void ct(int c) {
    cout << c << endl;
}

int main(){
    int t;
    cin>>t;
    forn(i,t)
    {
        int n;
        cin>>n;
        vector<int> a;
        forn(j,n)
        {
            int b;
            cin>>b;
            a.push_back(b);
        }
        int a1,a2,a3;
        
        forn(j,n){
            if (a[j]==1)
            {
                a1=j+1;
            }
            if (a[j]==2)
            {
                a2=j+1;
            }
            if (a[j]==n)
            {
                a3=j+1;
            }
        }

        if ((a3>a2 && a3<a1) || (a3<a2 && a3>a1))
        {
            cout<<a1<<" "<<a2<<endl;
        }

        else if (a3<a1 && a1<a2)
        {
            cout<<a3<<" "<<a1<<endl;
        }
        else if ((a3>a2 && a1<a2))
        {
            cout<<a3<<" "<<a1<<endl;
        }
        else if ((a3<a2 && a1>a2))
        {
            cout<<a3<<" "<<a2<<endl;
        }
        else if ((a3>a1 && a1>a2))
        {
            cout<<a3<<" "<<a1<<endl;
        }
        
        
        
        
        
        

    }
}

