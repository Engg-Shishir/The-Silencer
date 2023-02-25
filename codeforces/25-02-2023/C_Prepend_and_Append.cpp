/*
    Problem Name : Prepend and Append
    Source       : https://codeforces.com/contest/1791/problem/C
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 25/Feb/2023
    Time         : 11:45 AM
*/



#include<bits/stdc++.h>
using namespace std;


int main(){
    int test;
    cin >> test;

    while (test--)
    {
        int len;
        cin>>len;

        string text,res;
        cin >> text;
        int cnt = 0;
        for (int i = 0; i < len/2; i++)
        {
            if(i < (len/2) && (text[i]==text[len-(i+1)])) break;
            if(text[i]!=text[len-(i+1)]){
                cnt++;
            }
        }
        cout << text.length()- (cnt*2) << "\n";

    }
    
    return 0;
}