#include<vector>
#include<iostream>
#include<string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
   long long int t;
   cin>>t;
   
   for (int i = 0; i < t; i++)
    {
        string s;
        cin>>s;
        int c=0;
        if (s.length()==1)
        {
            if (s[0]=='_')
            {
                c+=2;
            }
            else
            {
                c++;
            }
        }
        else
        {
        
            if (s[0]=='_')
            {
                c++;
            }
            
            for (int j = 0; j < s.length()-1; j++)
            {
                if (s[j]=='_'  && s[j+1]=='_')
                {
                    c++;
                }
                
            }
            if (s[s.length()-1]=='_')
            {
                c++;
            }
            
        
        }
        cout<<c<<endl;
    }
}


