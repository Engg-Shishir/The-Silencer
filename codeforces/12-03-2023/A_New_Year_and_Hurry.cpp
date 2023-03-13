/*
    Problem Name : New Year and Hurry
    Source       : https://codeforces.com/problemset/problem/750/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 12/March/2023
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int pr,min,cnt=0;
    cin >> pr >> min;
    min= 240 - min;
    for (int i = 1; i <= pr; i++)
    {
        if(i*5 <= min){
             cnt++;
             min = min - (i*5);
        }
    }

    cout << cnt << "\n";
    
    return 0;
}