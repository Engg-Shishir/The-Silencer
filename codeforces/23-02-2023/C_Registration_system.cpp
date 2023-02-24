/*
    Problem Name : Registration system
    Source       : https://codeforces.com/problemset/problem/4/C
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 23/Feb/2023
    Time         : 12:45 AM
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;
    map<string, int> maps;  
    
    int cnt =0;
    while (test--)
    {
        string get;
        cin >> get;
        if(maps[get]){
          maps[get]++;
        }else{
          maps.insert(pair<string,int>(get,maps[get]++));
        }

        if(maps[get]==1) cout << "OK" << "\n";
        else  cout << get << maps[get]-1 << "\n";
    }

    return 0;
}
