/*
    Problem Name : Candies and Two Sisters
    Source       : https://codeforces.com/problemset/problem/1335/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 21/Feb/2023
    Time         : 09:38 PM
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;

    while (test--)
    {
        int get;
        cin >> get;
        if(get%2==0){
            cout << (get/2)-1 << "\n";
        }else cout << get/2 << "\n";
    }
    
    return 0;
}