/*
    Problem Name : Sum of Round Numbers
    Source       : https://codeforces.com/problemset/problem/1352/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 12/March/2023
*/

#include<bits/stdc++.h>
using namespace std;



void print(string num, vector<int>&list){
    int length =  num.length();
    int first_digit = num.front() - '0';
    int get = ceil(first_digit * pow(10,length-1));
    if(get!=0) list.push_back(get);
    if(length==1) return;
    num.erase(num.begin());
    print(num,list);
}

int main(){
    int test;
    cin>> test;

    while (test--)
    {
        vector<int>list;
        int main;
        cin >> main;

        string num = to_string(main);

        bool isRound = false;
        for (int i = 0; i < num.length(); i++)
        {
            if(num[i]!=0 && i==0){
                 isRound = true;
            }
            if(i!=0 && num[i]!='0'){
                 isRound = false;
                 break;
            }
        }
        if(isRound){
             cout << 1 << "\n";
             cout <<main << "\n";
             continue;
        }
        

    print(num,list);

    cout << list.size() << "\n";
    for (int i = 0; i < list.size(); i++)
    {
      cout << list[i] << " ";
    }
    cout <<"\n";
     
        
    }
    
    return 0;
}