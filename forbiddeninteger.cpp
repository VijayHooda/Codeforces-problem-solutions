#include <bits/stdc++.h> 
using namespace std;
#define forn(i, n) for (int i = 0; i < n; i++)
#define sz(v) (long long)v.size()
#define all(v) v.begin(),v.end()
#define eb emplace_back
 
void ct(long long c) {
    cout << c << endl;
}
 
void ct1(string c) {
    cout << c << endl;
}
bool canSum(const std::vector<long long>& nums, long long target) {
    std::vector<bool> dp(target + 1, false);
    dp[0] = true;
 
    for (long long i = 1; i <= target; ++i) {
        for (long long num : nums) {
            if (num <= i && dp[i - num]) {
                dp[i] = true;
                break;
            }
        }
    }
 
    return dp[target];
}
 
void getSumCombination(const std::vector<long long>& nums, long long target, std::vector<long long>& combination) {
    if (!canSum(nums, target))
        return;
 
    while (target > 0) {
        for (long long num : nums) {
            if (target >= num && canSum(nums, target - num)) {
                combination.push_back(num);
                target -= num;
                break;
            }
        }
    }
}
 
int main(){
    long long t;
    cin>>t;
    forn(i,t){
        long long n,k,x;
        cin>>n>>k>>x;
        vector<long long> a;
        for (long long i = 1; i <= k; i++)
        {
            if (i!=x)
            {
                a.push_back(i);
            }
            
        }
        
        if (k==x && x==1)
        {
            ct1("NO");
        }
 
        else
        {
            vector<long long> sumCombination;
            getSumCombination(a,n, sumCombination);
 
    if (!sumCombination.empty()) 
        {
            ct1("YES");
            ct(sumCombination.size());
            for (long long num : sumCombination) {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        } 
    else
        {
            ct1("NO");
        }
            
            
            
        }
        
    }
 
}