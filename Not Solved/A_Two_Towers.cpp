/*
    Problem Name : Two Towers
    Source       : https://codeforces.com/problemset/problem/1795/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 17/February/2023
    Time         : 04:03 PM
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcase,f1,s2;
    cin >> testcase;
    string first,second;

    while (testcase--)
    {
        first="";
        second="";
        cin >> f1 >> s2;
        while (f1--)
        {
            char get;
            cin >> get;
            first = first + get;
        }

        while (s2--)
        {
            char get;
            cin >> get;
            second = second + get;
        }
        
        if(first[first.length()-1] != second[second.length()-1]) cout << "YES" << "\n";
        else{
            if(first.length() != second.length()){
                if(first.length() > second.length()){
                    if((second[0] == second[second.length()-1]) && (first[0] != first[first.length()-1])) cout << "YES" << "\n";
                    else cout << "NO" << "\n";
                }else{
                    if((first[0] == first[first.length()-1]) && (second[0] != second[second.length()-1])) cout << "YES" << "\n";
                    else cout << "NO" << "\n";
                }
            }else{
                cout << "YES" << "\n";
            }
        }
    }

    return 0;
}