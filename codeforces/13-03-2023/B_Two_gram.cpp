/*
    Problem Name : Two-gram
    Source       : https://codeforces.com/contest/977/problem/B
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 13/March/2023
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int len;      cin >> len;
    string str;   cin >> str;   

    unordered_map<string,int> mp;
    for (int i = 0; i < str.size(); i++)
    {
      if(i!= str.size()-1){
        string ok = "";
        ok.push_back(str[i]);ok.push_back(str[i+1]);

        if (mp.count(ok) == 0)
           mp.insert({ok,1});
        else mp.at(ok)++;
      }else break;
    }

    
    string pr;
    int lg = 0;
    for (auto &pair: mp){
        if(pair.second > lg){
             pr = pair.first;
             lg = pair.second;
        }
    }

    cout << pr << "\n";
 

    
    return 0;
}