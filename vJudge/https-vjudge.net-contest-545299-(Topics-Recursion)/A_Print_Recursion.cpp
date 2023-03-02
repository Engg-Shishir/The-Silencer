/*
    Problem Name : Print Recursion
    Source       : https://vjudge.net/contest/545299#problem/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 01/March/2023
    Time         : 12:09 PM
*/

#include<bits/stdc++.h>
using namespace std;

void print(int num){
    if(num <= 0)  return;
    cout << "I love Recursion" << "\n";
    print(num-1);
}

int main(){
    int num;
    cin >> num;
    print(num);
    return 0;
}