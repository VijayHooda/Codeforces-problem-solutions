#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    for (int i=0;i<t;i++){
        int n=0;
        cin>>n;
        char a[n];
        for (int k = 0; k < n; k++)
        {
            cin>>a[k];
        }
        
        if (n==1){
            cout<<-1<<endl;
        }
        else {
            int c=0;
            for (int j=0;j<n-1;j++){
                if (a[j]=='L' && a[j+1]=='R'){
                    cout<<j+1<<endl;
                    c=1;
                    break;
                }
                else if (a[j]=='R' && a[j+1]=='L')
                {
                    cout<<0<<endl;
                    c=1;
                    break;
                }

            }
            if (c==0)
            {
                cout<<-1<<endl;
            }
            
        }

    }
}