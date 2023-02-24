/*
    Problem Name : Dragons
    Source       : https://codeforces.com/problemset/problem/230/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 24/Feb/2023
    Time         : 11:08 AM
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n, cnt = 0;
    vector<pair<int, int>> list;

    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        int dra, bon;
        cin >> dra >> bon;
        list.push_back(make_pair(dra, bon));
    }

    sort(list.begin(), list.end());

    for (int i = 0; i < n; i++)
    {
        if (list[i].first != 0 && s > list[i].first)
        {
            s += list[i].second;
            list[i].first = 0;
            list[i].second = 0;
            cnt++;
        }
    }

    if (cnt == n)
        cout << "YES" << "\n";
    else
        cout << "NO"<< "\n";

    return 0;
}
