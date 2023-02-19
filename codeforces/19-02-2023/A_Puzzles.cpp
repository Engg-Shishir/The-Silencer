/*
    Problem Name : Puzzles
    Source       : https://codeforces.com/problemset/problem/337/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 19/Feb/2023
    Time         : 11:48 PM
*/


#include <bits/stdc++.h>
using namespace std;


void solve()
{
   int n1,n2;
   cin >> n1 >> n2;
    vector<int> list;
    for (int i = 0; i < n2; i++)
    {
        int get;
        cin >> get;
        list.push_back(get);
    }
    sort(list.begin(),list.end());
    
    int dif = list[n2-1] - list[0];
    for (int i = 0; i < list.size(); i++)
    {
        if((i+n1-1) < list.size()){
            if((dif > (list[i+n1-1]-list[i]))){
                dif = list[i+n1-1]-list[i];
            }
        }
    }
    cout << dif << "\n";
   
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
 
    return 0;
}

 