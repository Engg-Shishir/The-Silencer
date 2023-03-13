/*
    Problem Name : Floor Number
    Source       : https://codeforces.com/contest/1426/problem/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 13/March/2023
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int x,y;
        cin >> x >> y;

        if(x <= 2){
            cout << 1 << "\n";
        }
        else{ 
            x = x-2;
            int ptr = ceil(x/(y*1.0));
            cout << ptr+1 << "\n";
        }
    }
    return 0;
}