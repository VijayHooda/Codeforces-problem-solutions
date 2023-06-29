#include <bits/stdc++.h> 
using namespace std;
#define forn(i, n) for (int i = 0; i < n; i++)
#define sz(v) (long long)v.size()
#define all(v) v.begin(),v.end()
#define eb emplace_back
 
bool haveSameSign(long long num1, long long num2) {
    return (num1 >= 0 && num2 >= 0) || (num1 < 0 && num2 < 0);
}
 
void ct(long long c) {
    cout << c << endl;
}
 
void ct1(string c) {
    cout << c << endl;
}
 
 
int main(){
    long long t;
    cin>>t;
    forn(i,t){
        long long a1,a2,b1,b2,c1,c2;
        cin>>a1>>a2;
        cin>>b1>>b2;
        cin>>c1>>c2;
        long long c=1;
        if (haveSameSign(a1-b1,a1-c1) && haveSameSign(a2-b2,a2-c2))
        {
            c+=min(abs(a1-b1),abs(a1-c1)) + min(abs(a2-b2),abs(a2-c2));
            ct(c);
        }
        else if (haveSameSign(a1-b1,a1-c1))
        {
            c+=min(abs(a1-b1),abs(a1-c1));
            ct(c);
        }
        else if (haveSameSign(a2-b2,a2-c2))
        {
            c+=min(abs(a2-b2),abs(a2-c2));
            ct(c);
        }
        else
        {
            ct(c);
        }
    }
}