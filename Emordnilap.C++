#include<iostream>
using namespace std;
long long int fact(int n) {
   if ((n==0)||(n==1))
   return 1;
   else
   return n*fact(n-1);}
int main(){
    const int N = 1e9 + 7;
    int n=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int t=0;
        cin>>t;
        cout<<((t*(t-1)*fact(t))%N)<<endl;

    }
    
    
    }
