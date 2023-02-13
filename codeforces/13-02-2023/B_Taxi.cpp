/*
    Problem Name : Taxi 
    Source       : https://codeforces.com/problemset/problem/158/B
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 13-02-2023
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,sum=0,cnt=0;
    cin >> num;
    vector<int>list;
    
    while (num--)
    {
        int get;
        cin >> get;
        list.push_back(get);
    }
    
    sort(list.begin(), list.end(), greater <>());
 
    for (int i = 0; i < list.size(); i++)
    {
        if(list[i] > 0){
            sum += list[i];
        
            for (int j = list.size()-1; j > i; j--)
            {
                if(list[j] > 0) {
                    if(sum+list[j] < 4){
                        sum += list[j];
                        list[j] = 0;
                    }
                    else if(sum+list[j] == 4){
                        sum += list[j];
                        list[j] = 0;
                        break;
                    }else{
                        break;
                    }
                }
            }
            sum = 0;
            cnt++;
        }
    }
    
 
    cout << cnt << "\n";
    
    return 0;
}