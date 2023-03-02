/*
    Problem Name : Distinct Split
    Source       : https://codeforces.com/problemset/problem/1791/D
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 27/Feb/2023
    Time         : 12:07 AM
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
   int test;
   cin >> test;

   while (test--)
   {
    int len;
    cin >> len;

    string get,s1="",s2="";
    cin >> get;
     
     s1 = s1+get[0];

    bool isFind = false;
    for (int i = 1; i < get.length(); i++)
     {
         for (int  j = 0; j < s1.length();j++)
         {
            if(get[i] == s1[j]){
               isFind = true;
               break;
            }
        }

        if(isFind==true) s2 = s2+get[i];
        else s1 = s1+get[i];
     }

     set<char> list;
     for (int i = 0; i < s2.size(); i++)
     {
       list.insert(s2[i]);
     }
     
     cout << s1.length() + list.size() << "\n";
     
   }
   
   return 0;
}