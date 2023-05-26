#include<vector>
#include<math.h>
#include<string>
#include <bits/stdc++.h>
 
using namespace std;

bool find( vector<string> a,string s){
    int t=0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i]==s)
        {
            t=1;
        }
    }
    return t;
    
}
int main(){
   int t=0;
   cin>>t;
   for (int i = 0; i < t; i++)
   {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<string> a;
        for (int j = 0; j < n-1; j++)
        {
            string s1 = s.substr(j,2);
            if (!find(a,s1))
            {
                a.push_back(s1);
            }
            
        }
        cout<<a.size()<<endl;
        
   }
}