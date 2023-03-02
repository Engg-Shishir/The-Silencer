/*
    Problem Name : Taisia and Dice
    Source       : https://codeforces.com/contest/1790/problem/B
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 26/Feb/2023
    Time         : 08:54 AM
*/

#include<bits/stdc++.h>
using namespace std;


vector<int>out;

void calc(int div, int dice){
    int loop =  div/dice;
    int ptr = loop;
    while (loop--)
    {
        out.push_back(dice);
    }
    int rem = div % dice;
    if(rem  > 0)
       calc(rem,(dice-ptr));
}



 
int main(){

   int test;
   cin >> test;

    while (test--)
    {
        int dice,sum,extra;
        cin >> dice >> sum >> extra;
        out.push_back(sum-extra);
        calc(extra, (dice-1));

        for (int i = 0; i < out.size(); i++)
        {
            cout << out[i] << " ";
        }
            cout <<"\n";
    }

    return 0;
}