/*
    Problem Name : Anton and Polyhedrons
    Source       : https://codeforces.com/problemset/problem/785/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 18/Feb/2023
    Time         : 07:11 PM
*/


#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
     int num,sum=0;
     cin >> num;
     while (num--)
     {
        string get;
        cin >> get;
       if (get == "Tetrahedron") sum = sum + 4;
       else if (get == "Cube") sum = sum + 6;
       else if (get == "Octahedron") sum = sum + 8;
       else if (get == "Dodecahedron") sum = sum + 12;
       else sum = sum + 20;
     }
 
     cout << sum << "\n";
     
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
     solve();
 
    return 0;
}


