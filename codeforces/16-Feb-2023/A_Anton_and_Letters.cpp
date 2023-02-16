/*
    Problem Name : Anton and Letters
    Source       : https://codeforces.com/problemset/problem/443/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 16/Feb/2023
    Time         : 11:36 AM
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    set<char> list;
    string get;
    getline(cin,get);
    for (int i = 0; i < get.length(); i++)
    {
       if(get[i]>='a' && get[i]<='z') list.insert(get[i]);
    }

    cout << list.size() << "\n";
    
    return 0;
}