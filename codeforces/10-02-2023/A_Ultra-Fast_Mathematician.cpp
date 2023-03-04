/*
    Problem Name : A - Ultra-Fast Mathematician
    Source       : https://codeforces.com/contest/61/problem/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 10/Feb/2023
    Time         : 12:11 PM
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    string num1,num2;
    cin >> num1 >> num2;

    for (int i = 0; i < num1.length(); i++)
    {
        if(num1[i]==num2[i]) cout << 0;
        else cout << 1;
    }
    cout << "\n";
    
    
    return 0;
}