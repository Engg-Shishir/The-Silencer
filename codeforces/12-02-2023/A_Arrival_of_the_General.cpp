/*
    Problem Name : Arrival of the General 
    Source       : https://codeforces.com/problemset/problem/144/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 12-02-2023
*/

#include<bits/stdc++.h>
using namespace std;
 
int getIndex(vector<int>list,int k){
    int index;
    auto it = find(list.begin(), list.end(), k);
    if (it != list.end())  index = it - list.begin();
 
    return index;
}
 
 
 
int main(){
    int num,maxMin,maxMinIn,cnt=0;
    cin >> num;
    vector<int>list;
 
    for (int i = 0; i < num; i++)
    {
        int get;
        cin >> get;
        list.push_back(get);
    }
 
    maxMin = *max_element (list.begin(), list.end());
    maxMinIn = getIndex(list,maxMin);
 
 
    for (int i = maxMinIn; i > 0; i--)
    {
        if(list[i-1] != list[i]) {
            swap(list[i], list[i-1]);
            cnt = cnt + 1;
        }
    }
 
    maxMin = *min_element (list.begin(), list.end());
    maxMinIn = getIndex(list,maxMin);
    for (int i = maxMinIn+1; i < list.size(); i++)
    {
        if(list[i]==maxMin) maxMinIn = i;
    }
    
    
    
    for (int i = maxMinIn; i < list.size()-1; i++)
    {
        if(list[i+1] != list[i]){
            swap(list[i], list[i+1]);
            cnt = cnt + 1;
        }
    }
   
    cout << cnt << "\n";
    
   
    return 0;
}