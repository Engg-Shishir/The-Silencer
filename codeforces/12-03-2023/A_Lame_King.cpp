/*
    Problem Name : Lame King
    Source       : https://codeforces.com/problemset/problem/1804/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 12/March/2023
*/



#include<bits/stdc++.h>
using namespace std;
int main(){
   int test;
   cin >> test;

   while (test--)
   {    
    
        int x, y;
        cin >> x >> y;
        x = abs(x);
        y = abs(y);
        
        int dif,cnt=0;

        if(x==y){
            cout << x*2 << "\n";
            continue;
        }

        if(x > y){
            cnt = cnt + (y*2);
            dif = x - y;
        }
        else{
            dif = y - x;
            cnt = cnt + (x*2);
        } 

       
        cnt = cnt + (dif*2)-1;
        cout << cnt << "\n";
   }
   

    return 0; 
}