#include<vector>
#include<math.h>
#include <bits/stdc++.h>
 
using namespace std;
 
bool issameparity(vector<int> a, int n){
    for (int i = 0; i < n-1; i++)
    {
        if (a[i]%2 != a[i+1]%2){
            return false;
        }
    }
    return true;
    
}
int main(){
   int t;
   cin>>t;
   for (int i = 0; i < t; i++)
   {
    int n;
    cin>>n;
    vector<int> a;
    int y;
    for (int j = 0; j < n; j++)
    {
        
        cin>>y;
        a.push_back(y);
    }
    if (!issameparity(a,n))       
    {
        int q = INT_MAX;
        int w = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if (a[j]%2==0 && a[j]<q)
            {
                q=a[j];
            }
 
            if (a[j]%2!=0 && a[j]<w)
            {
                w=a[j];
            }
        }
        if (q>w)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
 
    else
    {
        cout<<"YES"<<endl;
    }
    
 
 
   }
}