/*
    Problem Name : Amusing Joke
    Source       : https://codeforces.com/problemset/problem/141/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 21/Feb/2023
    Time         : 08:23 PM
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
     string guest,host,pile;
     cin >> guest >> host >> pile;
     host = host + guest;
     sort(host.begin(),host.end()); 
     sort(pile.begin(),pile.end()); 
    
    if(host==pile)  cout << "YES" << "\n";
    else   cout << "NO" << "\n";

    return 0;
}