/*
    Problem Name : I - 1 2 1 3 1 2 1
    Source       : https://vjudge.net/contest/545299#problem/I
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 02/March/2023
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
vector<int> first;

void store(int num){
    if(num < 1) return;
    if(num == 1) {
        v.push_back({1});
        return;
    }
    store(num-1);
    first = v[num-1];
    first.push_back(num);
    first.push_back(first[0]);
    v.push_back(first);
}

int main(){
    v.push_back({0});
    int num;
    cin >> num;
    store(num);

    for (int i = 0; i < v.size(); i++)
    { 
        for (int j = 0; i <v[i].size(); i++)
        {
           cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    cout << v.size();
    
    return 0;
}
