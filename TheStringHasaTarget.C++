#include<vector>
#include<iostream>
#include<string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
   int t=0;
   cin>>t;
   
   for (int j = 0; j < t; j++)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
         vector<pair<int, pair<char, int>>> uniqueChars;

    // loop through each character in the string
    for (int i = a.length() - 1; i >= 0; --i) {
        char c = a[i];
        bool found = false;
        // check if the character already exists in the vector
        for (auto & pair : uniqueChars) {
            if (pair.second.first == c) {
                found = true;
                
            }
        }
        // if the character is not found in the vector, add it
        if (!found) {
            int asciiValue = (int)c;
            uniqueChars.push_back(make_pair(i, make_pair(c, asciiValue)));
        }
    }

    // sort the vector by ascending ASCII value
    sort(uniqueChars.begin(), uniqueChars.end(),
         [](const pair<int, pair<char, int>>& a, const pair<int, pair<char, int>>& b) {
             return a.second.second < b.second.second;
         });

    // get the character with the minimum ASCII value
    char minChar = uniqueChars.front().second.first;
    int k = uniqueChars.front().first;
    if (k!=0)
    {
        a.replace(k,1,"");
        a.insert(0,1,minChar);
        cout<<a<<endl;
        
    }
    else
    {
        cout<<a<<endl;   
        
    }
    
}
return 0;
}