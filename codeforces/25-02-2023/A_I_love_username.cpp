/*
    Problem Name : I_love_%username%
    Source       : https://codeforces.com/problemset/problem/155/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 25/Feb/2023
    Time         : 07:17 PM
*/




#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    vector<int> list;
    while (num--)
    {
        int get;
        cin >> get;
        list.push_back(get);
    }
    
    int small = list[0],cnt=0;
    int lg = list[0];

    
    for (int i = 1; i < list.size(); i++)
    {
        if(list[i] < small){
             small = list[i];
             cnt++;
        }
        if(list[i] > lg){
             lg = list[i];
             cnt++;
        }
    }
    
    cout << cnt << "\n";
    return 0;
}