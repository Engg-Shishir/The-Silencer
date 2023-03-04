/*
    Problem Name : Even Odds
    Source       : https://codeforces.com/problemset/problem/318/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 10/Feb/2023
    Time         : 08:31 AM
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int range,pos,mid; 
    cin >> range >> pos;


    mid = ceil(range/2.0);


    if(pos<=mid) cout << (2*pos) - 1 << "\n";
    else cout << (pos-mid)*2 << "\n";


    return 0;
}

// 1000000000000 500000000001