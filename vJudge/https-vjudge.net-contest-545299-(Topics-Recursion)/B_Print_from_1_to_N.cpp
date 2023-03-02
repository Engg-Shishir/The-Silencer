/*
    Problem Name : Print from 1 to N
    Source       : https://vjudge.net/contest/545299#problem/B
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 01/March/2023
    Time         : 12:13 PM
*/

#include<bits/stdc++.h>
using namespace std;

void print(int num){
    if(num <= 0)  return;
    print(num-1);
    cout << num << "\n";
}

int main(){
    int num;
    cin >> num;
    print(num);
    return 0;
}