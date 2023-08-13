#include<bits/stdc++.h>
using namespace std;

bool allsame(vector<int> a){
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i]!=a[0])
        {
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
        vector<int>a;
        for (int i = 0; i < n; i++)
        {
            int a1;
            cin>>a1;
            a.push_back(a1);
        }

        if (allsame(a)){
            cout<<-1<<endl;
        }
        else
        {
            sort(a.begin(),a.end());
            int c=0, k=a.size()-1;
            while (a[k]==a[a.size()-1])
            {
                c++;
                k--;
            }
            
            cout<<a.size()-c<<" "<<c<<endl;
            for (int j = 0; j < a.size()-c; j++)
            {
                cout<<a[j]<<" ";
            }
            cout<<endl;
            for(int j=0;j<c;j++){
                cout<<a[a.size()-1]<<" ";
            }
            cout<<endl;
            
        }
        

        
    }
    
}