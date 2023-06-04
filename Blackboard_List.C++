#include <bits/stdc++.h>
 
using namespace std;
 
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(),v.end()
#define eb emplace_back
 
 
void ct(int c) {
    cout << c << endl;
}
void merge(int arr[],int l,int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
   
    int k=l;
    
    for (int i = 0; i < n1; i++)
    {
        a[i]=arr[l+i];

    }
    
    for (int i = 0; i < n2; i++)
    {
        b[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    

    while (i<n1 && j<n2)
    {
        if(a[i]<b[j]){
            
            arr[k]=a[i];
            i++;
            k++;
        }
        else{
            arr[k]=b[j];
            j++;
            k++;
        }

    }

    while (i<n1)
    {
        arr[k]=a[i];
        i++;
        k++;
    }

    while (j<n2)
    {
        arr[k]=b[j];
        j++;
        k++;
    }
    
}

void mergesort(int arr[],int l,int r){
    if (l<r)
    {
        int mid = (l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
    
}
 

int main(){
    int t;
    cin>>t;
    forn(i,t)
    {
        int n;
        cin>>n;
        int a[n];
        forn(j,n){
            int b;
            cin>>b;
            a[j]=b;
        }
        mergesort(a,0,n-1);
        if (a[0]<0)
        {
            ct(a[0]);
        }
        else{
            ct(a[n-1]);
        }
        

        

    }
}