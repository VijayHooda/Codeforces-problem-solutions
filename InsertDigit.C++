#include<iostream>
#include<vector>
#include<string>
#include <bits/stdc++.h>
 
using namespace std;


int main(){
    int t=0;
    cin>>t;
    for (int j = 0; j < t; j++)
    {
        /* code */
    
    int n,d;
    cin>>n>>d;
    string a;
    cin>>a;
    for (int i = 0; i<=  n; i++)
    {
        if (d>int (a[i]-'0'))
        {
            a.insert(i,to_string(d));
            break;
        }
        else if (i==n)
        {
            a.insert(n,to_string(d));
        }
        
    }
    cout<<a<<endl;
    

    


}
}