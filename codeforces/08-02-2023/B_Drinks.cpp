/*
    Problem Name : B - Drinks
    Source       : https://codeforces.com/contest/200/problem/B
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 08/Feb/2023
    Time         : 09:05 PM
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,loop,sum =0;
    cin >> n;
    loop = n;
    while (loop--)
    {
        int num;
        cin >> num;
        sum = sum + num;
    }

    double frac = (float)sum/n;

    cout << fixed << setprecision(12) << frac << endl;
    return 0;
}