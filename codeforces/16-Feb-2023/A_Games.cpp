/*
    Problem Name : Games
    Source       : https://codeforces.com/problemset/problem/268/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 16/Feb/2023
    Time         : 07:59 PM
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,cnt=0;
    cin >> num;

    vector<int> home;
    vector<int> guest;

    while (num--)
    {
        int a,b;
        cin >> a >> b;
        home.push_back(a);
        guest.push_back(b);
    }

    for (int i = 0; i < home.size(); i++)
    {
        for (int j = 0; j < home.size(); j++)
        {
            if(home[i]==guest[j]){
                 cnt++;
            }
        }
    }

    cout << cnt << "\n";

    return 0;
}