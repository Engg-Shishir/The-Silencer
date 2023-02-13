/*
    Problem      : https://codeforces.com/problemset/problem/405/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 11-02-2023
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    vector<int>box;
    
    for (int i = 0; i < num; i++)
    {
        int x;
        cin  >> x;
        box.push_back(x);
    }
    
 
   sort( box.begin(), box.end() );
    
    for (int i = 0; i < box.size(); i++)
    {
        cout << box[i] << " ";
    }
    
    
 
    return 0;
}