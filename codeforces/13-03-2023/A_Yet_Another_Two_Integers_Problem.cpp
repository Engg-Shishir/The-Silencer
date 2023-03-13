/*
    Problem Name : Yet Another Two Integers Problem
    Source       : https://codeforces.com/problemset/problem/1409/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 13/March/2023
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    vector<int>list = {10,9,8,7,6,5,4,3,2,1};
    while (test--)
    { 
        long long int num1,num2;
        cin>> num1 >> num2;
        if(num1==num2){
            cout << 0 << "\n";
        }else{
           long long int dif = abs(num1-num2);
           int cnt = 0;
           for (int i = 0; i < list.size();)
           {
            if(dif==0) break;
             if(list[i] <= dif){
                cnt = cnt + (dif/list[i]);
                dif = dif % list[i];
             }else i++;
           }
            cout << cnt << "\n";
        }
    }
    
    return 0;
}