/*
    Problem Name : Codeforces Checking
    Source       : https://codeforces.com/contest/1791/problem/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 25/Feb/2023
    Time         : 10:00 AM
*/



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    string text = "codeforces";
    while (n--)
    {
        char c;
        cin >> c;
        bool check = false;
        for (int i = 0; i < text.length(); i++)
        {
            if(text[i]==c){
                check = true;
                break;
            }
        }

        if(check == true) cout << "YES" << "\n";
        else  cout << "NO" << "\n";
        
    }
    

    return 0;
}