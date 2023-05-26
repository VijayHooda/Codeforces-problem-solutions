#include<vector>
#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int main(){
   int t=0;
   cin>>t;
   
   for (int i = 0; i < t; i++)
    {
        int same=0;
            
        int j=0;
        string numdigitser_str;
        
        cin >> numdigitser_str;

        vector <int> digits;

        for (char digit_char : numdigitser_str) {
            int digit_int = digit_char - '0'; 
            digits.push_back(digit_int);
            }
            
        for (int j = 0; j < 4; j++)
        {
            if (digits[0]==digits[j] && j!=0)
            {
                same++;
            }
            
        }
        for (int j = 0; j < 4; j++)
        {
            if (digits[1]==digits[j] && j!=1 )
            {
                same++;
            }
            
        }
            
        for (int j = 0; j < 4; j++)
        {
            if (digits[2]==digits[j] && j!=2)
            {
                same++;
            }
            
        }
        
        for (int j = 0; j < 4; j++)
        {
            if (digits[3]==digits[j] && j!=3)
            {
                same++;
            }
            
        }
        // digits.clear();
        same/=2;

        switch (same)
        {
        case 0:
            cout<<4<<endl;
            break;;
        case 1:
            cout<<4<<endl;
            break;;
        case 3:
            cout<<6<<endl;
            break;;
        case 6:
            cout<<-1<<endl;
            break;
        default:
            cout<<4<<endl;
        }
            

    }
   return 0;
   }
