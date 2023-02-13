/*
    Problem Name : Divisibility Problem      
    Source       : https://codeforces.com/problemset/problem/1328/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 12-02-2023
*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int test;
    cin >> test;
    vector< pair <int,int> > vect;
 
    while (test--)
    {
       int a,b;
       cin >> a >> b; 
       vect.push_back(make_pair(a,b) );
    }
 
    for (int i = 0; i < vect.size(); i++)
    {
        int first, second;
        first = vect[i].first;
        second = vect[i].second;
 
        if(first % second ==0){
            cout << 0 << "\n";
        }else{
            if(second > first){
                cout << second-first << "\n";
            }
            else{
                int ok = ceil((float)first/(float)second);
                second = ok*second;
 
                cout << second-first << "\n";
            }
        }
    }
 
    
    return 0;
}