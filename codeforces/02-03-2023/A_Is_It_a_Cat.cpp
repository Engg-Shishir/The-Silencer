/*
    Problem Name : Is It a Cat?
    Source       : https://codeforces.com/contest/1800/problem/0
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 02/March/2023
    Time         : 08:56 PM
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

   int test;
   cin >> test;
   string fix = "meow";
   while (test--)
   {
       int length;
       string get;

       cin >> length;
       cin >> get;

        for (int i = 0; i < get.size(); i++)
            if(get[i]>=65 && get[i]<=90) get[i] = get[i] + 32;
           

       char ch = get[0];
       string rs="";
       rs = rs + get[0];

       for (int i = 1; i < get.size(); i++)
       {
         if(get[i]>=65 && get[i]<=90) get[i] = get[i] + 32;
         if(ch!=get[i]){
             rs = rs+ get[i];
             ch = get[i];
         }
       }

       if(fix==rs) cout << "YES" << "\n";
       else cout << "NO" << "\n";
   }
   
    return 0;
}