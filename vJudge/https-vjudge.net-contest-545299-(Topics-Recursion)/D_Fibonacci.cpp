/*
    Problem Name : Fibonacci
    Source       : https://vjudge.net/contest/545299#problem/D
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 02/March/2023
*/

#include<bits/stdc++.h>
using namespace std;


vector<int> fibo={0};


void fibonacci(int num){
    int dif;
    if(num < 1) return;

    fibonacci(num-1);

    if(num!=1) dif = fibo[num-1] + fibo[num-2];
    else dif =1;
    fibo.push_back(dif);   
}

int main(){
    int num;
    cin >> num;
    fibonacci(num-1);
    cout << fibo[num-1] << "\n";
    return 0;
}


/*
    Visual Representation of rcursive call : 
    SNO  fibonacci     call      return
    1       5           4
    2       4           3
    3       3           2          
    4       2           1          1 

    5                   2          1
    6                   3          2
    7                   4          3
*/




