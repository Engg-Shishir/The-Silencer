/*
    Problem Name : HQ9+
    Source       : https://codeforces.com/problemset/problem/133/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 10/Feb/2023
    Time         : 11:50 PM
*/


#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin >> s;
    bool check = false;
    
    for (int i = 0; i < s.length(); i++)
    {
       if(s[i]=='H' || s[i]=='Q' || s[i]=='9') {
        check = true;
       }
    }

    if(check) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    

    return 0;
}