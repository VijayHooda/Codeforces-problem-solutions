#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    for (int i=0;i<t;i++){
        int n=0;
        cin>>n;
        if (n==3){
            cout<<"NO"<<endl;

        }
        else if (n%2==0)
        {
            cout<<"YES"<<endl;
            for (int j=0;j<n;j++){
                if (j%2==0)
                {
                    cout<<n<<' ';

                }
                else{
                    cout<<-n<<' ';

                }
            }
            cout<<endl;

        }
        else{
            cout<<"YES"<<endl;
            int k=(n-3)/2;
            for (int j=0;j<n;j++){
                if (j%2==0){
                    cout<<k<<' ';
                }
                else{
                    cout<<-(k+1)<<' ';
                }
                

        }
        cout<<endl;
    }
}
}