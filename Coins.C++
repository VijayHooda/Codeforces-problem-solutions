#include<vector>
#include<iostream>
#include<string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
   long long int t;
   cin>>t;
   
   for (int j = 0; j < t; j++)
    {
        long long int n,k;
        cin>>n>>k;
        if ((n%2)==0)
        {
            cout<<"YES"<<endl;
            
        }
        else 
        {
            if ((k%2)==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
            
        }


    }
}



