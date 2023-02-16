/*
    Problem Name : IQ test
    Source       : https://codeforces.com/problemset/problem/25/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 16/Feb/2023
    Time         : 07:11 PM
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>list;
    int num,get,even=0,pos=0;
    cin >> num;
    
    while (num--)
    {
        cin >> get;
        list.push_back(get);
        if(get%2==0){
            even++;
        }
    }

    
    for (int i = 0; i < list.size(); i++)
    {
        if(even > 1){
            if(list[i]%2 != 0){
                pos = i+1;
                break;
            }
        }else{
            if(list[i]%2 == 0){
                pos = i+1;
                break;
            }
        }
    }

        cout << pos << "\n";
    


    return 0;
}