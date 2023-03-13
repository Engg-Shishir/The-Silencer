/*
    Problem Name : The New Year: Meeting Friends
    Source       : https://codeforces.com/problemset/problem/723/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 13/March/2023
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int test = 3;
    vector<int>list;
    while (test--)
    { 
        int num;
        cin>> num;
        list.push_back(num);
    }
    sort( list.begin(), list.end() );
    int sum = abs(list[0]-list[1]) + abs(list[1]-list[2]);
    cout << sum << "\n";
    
    return 0;
}