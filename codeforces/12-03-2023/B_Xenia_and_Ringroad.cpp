/*
    Problem Name : Xenia and Ringroad
    Source       : https://codeforces.com/problemset/problem/339/B
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 12/March/2023
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
   int house,work;
   vector<int> list;

   cin >> house >> work;
   int ptr = 1;
   long long cnt=0;
   while (work--)
   {
        int n;
        cin >> n;
        if(n >= ptr ){
            cnt = cnt + (n-ptr);
            ptr = n;
        }else{
            cnt = cnt + (house - ptr);
            cnt = cnt + n;
            ptr = n;
        }
   }
    cout << cnt << "\n";

    return 0;
}