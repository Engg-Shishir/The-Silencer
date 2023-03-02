/*
    Problem Name : Vanya and Lanterns
    Source       : https://codeforces.com/problemset/problem/492/B
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 25/Feb/2023
    Time         : 05:18 PM
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total,road;
    vector<int> list;
    
    cin >> total >> road;

    while(total--){
        int get;
        cin >> get;
        list.push_back(get);
    }
    sort(list.begin(),list.end());
    
    int dif = 0;
    for (int i = 1; i <= list.size();)
    {
        int vs = list[i] - list[i-1];
        if(dif < vs) dif = vs;
        
        if((i==list.size()-2)){
          i=i+1;
        }else i=i+2;
    }
    if(list[0]==0) cout << fixed<< setprecision(10) << (dif/2.0) << "\n";
    else{
       if(list[0] > (dif/2.0)) cout << fixed << setprecision(10) << list[0]*1.0 << "\n";
       else cout <<fixed<<  setprecision(10) << (dif/2.0)*1.0 << "\n";
    }


    return 0;
}