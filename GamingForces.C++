#include <bits/stdc++.h>

using namespace std;
int main() {
    int t=0;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n=0;
        cin>>n;
        int arr[n+2];
        for (int j = 0; j < n; j++)
        {
            
            cin>>arr[j];
        }
        int b=0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i]==1)
            {
                b+=1;
            }
        
            
        }
        int h=b/2;
        int g=n-h;
        cout<<g<<endl;
        
        
        
    }
    
}