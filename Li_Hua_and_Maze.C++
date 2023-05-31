#include<vector>
#include<iostream>
#include<string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   
   for (int j = 0; j < t; j++)
    {
        int n,m,x1,x2,y1,y2;
        cin>>n>>m;
        cin>>x1>>y1>>x2>>y2;
        int t2,t1;
        if ((x1==1 && y1==1) || (x1==1 && y1==m) || (x1==n && y1==1) || (x1==n && y1==m))
        {
            t1=2;
        }
        else if ((x1==1) || (x1==n) || (y1==1) || (y1==m))
        {
            t1=3;
        }
        else
        {
            t1=4;
        }
        if ((x2==1 && y2==1) || (x2==1 && y2==m) || (x2==n && y2==1) || (x2==n && y2==m))
        {
            t2=2;
        }
        else if ((x2==1) || (x2==n) || (y2==1) || (y2==m))
        {
            t2=3;
        }
        else
        {
            t2=4;
        }

        if (t1<t2)
        {
            cout<<t1<<endl;
        }
        else
        {
            cout<<t2<<endl;
        }
        
        

        
        
        
       
         
    }
}


















































