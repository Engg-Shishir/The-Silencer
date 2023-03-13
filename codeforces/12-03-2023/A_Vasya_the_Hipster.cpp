/*
    Problem Name : Vasya the Hipster
    Source       : https://codeforces.com/problemset/problem/581/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 12/March/2023
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int red,blue,cnt=0;
    cin >> red >> blue;
    cnt = red+blue;
    if(red < blue){
        cout << red;
        cnt = cnt - (red*2);
    }
    else{ 
        cout << blue;
        cnt = cnt - (blue*2);
    }
    cout << " " << cnt/2 << "\n";
    
    return 0;
}