/*
    Problem Name : Print Digits using Recursion
    Source       : https://vjudge.net/contest/545299#problem/C
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 01/March/2023
    Time         : 12:40 PM
*/

#include<bits/stdc++.h>
using namespace std;

void print(int num){
    if(num < 10){
        cout << num << " ";
        return;
    }else{
       print(num/10);
       cout << num % 10 << " ";
    }
}

int main(){
    int num,test;
    cin >> test;
    while (test--)
    {
        cin >> num;
        print(num);
        cout << "\n";
    }
    
    return 0;
}