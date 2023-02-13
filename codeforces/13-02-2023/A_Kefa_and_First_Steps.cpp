/*
    Problem Name : Kefa and First Steps 
    Source       : https://codeforces.com/problemset/problem/580/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 13-02-2023
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num;
    cin >> num;
    int res = 0,count = 0,store = 0;
    while (num--)
    {
        int get;
        cin >> get;
 
        if(store==get || get > store) count++;
        else{
           if(res < count) res = count;
           count=1;
        }
        store = get;
    }
    if(res < count) res = count;
 
    cout << res << "\n";
    
    return 0;
}