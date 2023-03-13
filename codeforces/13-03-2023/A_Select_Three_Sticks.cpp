/*
    Problem Name : Select Three Sticks
    Source       : https://codeforces.com/problemset/problem/1734/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 13/March/2023
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;

    while (test--)
    {
        vector<int> list;
        int x;
        cin >> x;
        
        for (int i = 0; i < x; i++)
        {
          int get;
          cin >> get;
          list.push_back(get);
        }

        sort(list.begin(),list.end());

        int check = (list[1]-list[0]) + (list[2]-list[1]);
        for (int i = 1; i < list.size()-2; i++)
        {
            int dif = (list[i+1]-list[i]) + (list[i+2]-list[i+1]);
            if(dif < check) check = dif;
        }
        cout << check << "\n"; 
        
    }

    return 0;
}