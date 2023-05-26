#include<iostream>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    char a[n];
    for (int i=0;i<n;i++){
        int n1=0;
        cin>>n1;
        cin>>a;
        
        int n2=0;
        char a1[n1];
        if (a[0]=='1'){
            n2=1;
        }
        for (int j=1;j<n1;j++){
            if (a[j]=='1' && n2==0){
                a1[j]='+';
                n2=1;
                }
            else if (a[j]=='1' && n2==1)
            {
                a1[j]='-';
                n2=0;
            }
            else if (a[j]=='0')
            {
                a1[j]='+';
            }
            
        }
        for (int k=1;k<n1;k++){
            cout<<a1[k];
        }
        cout<<endl;
    
    
}
return 0;
}
