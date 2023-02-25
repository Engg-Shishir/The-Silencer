/*
    Problem Name : Police Recruits
    Source       : https://codeforces.com/problemset/problem/427/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 25/Feb/2023
    Time         : 07:31 PM
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;

    int point = 0, cnt = 0;
    while (num--)
    {
        int get;
        cin >> get;
        if(get==-1){
            if(point<=0)  cnt++;
            else{  
                point--;
            }
        }else{
          point = point + get;
        }
    }

    cout << cnt << "\n";
    
    return 0;
}