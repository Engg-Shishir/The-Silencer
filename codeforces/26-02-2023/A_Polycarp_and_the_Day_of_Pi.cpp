/*
    Problem Name : Polycarp and the Day of Pi
    Source       : https://codeforces.com/contest/1790/problem/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 26/Feb/2023
    Time         : 06:54 AM
*/

#include<bits/stdc++.h>
using namespace std;
const string PI = "314159265358979323846264338327";

int main(){

   int test;
   cin >> test;

   while (test--)
   {
    string get;
    cin >> get;
    int cnt=0;
    for (int i = 0; i < get.length(); i++)
    {
        if(get[i]==PI[i]) cnt++;
        else break;
    }
    
    cout << cnt << "\n";

   }

    return 0;
}