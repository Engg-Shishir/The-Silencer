/*
    Problem Name : Fox And Snake
    Source       : https://codeforces.com/problemset/problem/510/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 24/Feb/2023
    Time         : 08:46 AM
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int col, len;
    cin >> col >> len;
    
    for (int j = 1; j <= col; j++)
    {    
        if (j % 2 == 0)
        {
            if ((j/2)%2 == 0)
            {
                cout << "#";
                for (int i = 2; i <= len; i++)   cout << ".";
            }else{
                for (int i = 1; i <= len-1; i++) cout << ".";
                cout << "#";
            }
        }
        else for (int i = 1; i <= len; i++) cout << "#";
        cout << "\n";
    }
    
    return 0;
}