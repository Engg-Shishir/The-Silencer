/*
    Problem Name : Pyramid
    Source       : https://vjudge.net/contest/545299#problem/F
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 02/March/2023
*/

#include<bits/stdc++.h>
using namespace std;


int ptr;
void space(int sp){
   if(sp < 1) return;
   cout <<" "; 
   space(sp-1);
}
void star(int st){
   if(st < 1) return;
   cout << "*"; 
   star(st-1);
}

void piramid(int num){
    if(num < 1) return;
    piramid(num-1);
    space(ptr-num);
    star((2*num)-1);
    cout << "\n";
}

int main(){
    int num;
    cin >> num;
    ptr = num;
    piramid(num);
    return 0;
}
