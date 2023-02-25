/*
    Problem Name : Following Directions
    Source       : https://codeforces.com/contest/1791/problem/B
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 25/Feb/2023
    Time         : 10:42 AM
*/




#include<bits/stdc++.h>
using namespace std;

int main(){
     pair<int,int>list;
     


     int test;
     cin >> test;
     while (test--)
     {
     list = make_pair(0,0);
        int len;
        cin >> len;
        string dir;
        cin >> dir;
        
        bool check = false;
        for (int i = 0; i < len; i++)
        {
            if(dir[i]=='U') list.second += 1;
            if(dir[i]=='D') list.second -= 1;
            if(dir[i]=='L') list.first -= 1;
            if(dir[i]=='R') list.first += 1;

            if(list.first==1 && list.second==1){
                 check = true;
                 break;
            }
        }
        if(check==true)  cout << "YES"<< "\n";
        else  cout << "NO" "\n"; 
     }
     
     

    return 0;
}