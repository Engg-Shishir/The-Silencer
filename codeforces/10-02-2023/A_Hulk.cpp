/*
    Problem Name : A - Hulk
    Source       : https://codeforces.com/contest/705/problem/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 10/Feb/2023
    Time         : 12:32 AM
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;

    string res="";
    bool thatStart = false;

    for (int i = 1; i <= num; i++)
    {
        if(thatStart) res = res+" that "; 
        if(i%2!=0) res = res+"I hate"; 

        thatStart = true;

        if(i%2==0) res = res+"I love";
    }

    
    res = res+" it";
    cout << res << "\n";

    return 0;
}