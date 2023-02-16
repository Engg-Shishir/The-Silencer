/*
    Problem Name : cAPS lOCK
    Source       : https://codeforces.com/problemset/problem/131/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 16/Feb/2023
    Time         : 02:59 AM
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string lock;
    getline(cin,lock);
      
    bool check = false;
    int len = lock.length();
    int cnt=0,cnt1=0;

    for(int i = 1; i < len; i++){
        if((lock[i] >= 'a' && lock[i] <= 'z')) cnt++;
        else cnt1++;
    }

    if(cnt1==len-1) check = true;

    if(check){
        for (int i = 0; i < len; i++)
        {
            if((lock[i] >= 'a' && lock[i] <= 'z')) lock[i]=lock[i]-32;
            else lock[i]=lock[i]+32;
        }   
    }
    cout << lock << "\n";
    return 0;
}