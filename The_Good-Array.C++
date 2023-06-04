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
        int n,k;
        cin>>n>>k;
        // if (k==1)
        // {
        //     ct(n);
        // }
        // else if (k==n)
        // {
        //     ct(2);
        // }

        if (k==1)
        {
            ct(n);
        }
        
        else if ((n%k)==0)
        {
            ct((n/k)+1);
        }
        
        
        else if (k==n-1)
        {
            ct(2);
        }
        
        else if (k>(n+1)/2 )
        {
            ct(3);
        }
        
        else if ((n%k)<2)
        {
            int l = int(n/k)+1;
            ct(l);
        }

        else if ((n%k)>1)
        {
            int l = int(n/k)+2;
            ct(l);
        }

        
        

        
        

    }

}