#include<vector>
#include <bits/stdc++.h>
 
using namespace std;
int main(){
   int t=0;
   cin>>t;
   for (int i = 0; i < t; i++)
   {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (b>d)
    {
        cout<<-1<<endl;
    }
    
    else if (a==c && b==d)
    {
        cout<<0<<endl;
        
    }
    else{
    int ct = 0;
    while (b!=d)
    {
        ct++;
        a++;
        b++;
 
    }
    if (a==c)
    {
        cout<<ct<<endl;
        
    }
    else if (a<c)
    {
        cout<<-1<<endl;
        
    }
    else{
        while (a!=c)
    {
        ct++;
        a--;
        
    }
    cout<<ct<<endl;
    }
}
   }   
return 0;
}


