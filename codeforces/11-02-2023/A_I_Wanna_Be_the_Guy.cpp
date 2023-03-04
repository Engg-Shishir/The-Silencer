/*
    Problem Name : A - I Wanna Be the Guy
    Source       : https://codeforces.com/contest/469/problem/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 11/Feb/2023
    Time         : 01:31 PM
*/

#include <bits/stdc++.h> // output 
using namespace std;
 
int main()
{
  
  bool check = false;
  int num,x,y,get;
  cin >> num >> x;
 
  vector<int> A;
  vector<int> B;
  vector<int> AB;
  vector<int> st;
 
  for (int i = 1; i <= num; i++)
  {
    st.push_back(i);
  }
 
 
  for (int i = 0; i < x; i++)
  {
    cin >> get;
    A.push_back(get);
  }
    cin >> y;
  for (int i = 0; i < y; i++)
  {
    cin >> get;
    B.push_back(get);
  }
 
 
  AB = A;
  AB.insert(AB.end(), B.begin(), B.end());
 
 
 for (int i = 0; i < num; i++)
 {
    for (int j = 0; j < AB.size(); j++)
    {
        if(st[i]==AB[j]){
            check = true;
            break;
        }
        else{
            check = false;
        }
    }
    if(check==false) break;
 }
 
 if(check) cout << "I become the guy. \n";
 else cout << "Oh, my keyboard! \n";


 
}
