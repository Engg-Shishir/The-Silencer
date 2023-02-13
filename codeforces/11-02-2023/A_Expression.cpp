/*
    Problem      : https://codeforces.com/problemset/problem/479/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 11-02-2023
*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a, b, c, res;
    cin >> a >> b >>c ;
 
    res  = a+(b*c);
    if(a*(b+c) > res) res = a*(b+c);
    if((a*b)+c > res) res = (a*b)+c;
    if((a+b)*c > res) res = (a+b)*c;
    if((a+b+c) > res) res = (a+b+c);
    if((a*b*c) > res) res = (a*b*c);
 
 
    cout << res << "\n";
    return 0;
}