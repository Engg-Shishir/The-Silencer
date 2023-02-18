/*
    Problem Name : Hit the Lottery
    Source       : https://codeforces.com/problemset/problem/996/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 18/Feb/2023
    Time         : 05:08 PM
*/

#include<bits/stdc++.h>
using namespace std;

int calculate(int num, vector<int>list){
    int res=0,dif,div;
    if (num>0)
	{
        dif = num - list[0];
        div = list[0];

        for (int i = 1; i < list.size(); i++)
        {
            if(dif > (num-list[i]) && (num-list[i]) >= 0) {
                dif = num-list[i];
                div = list[i];
            }
        }
        res = num/div;
        num = num % div;
        
        res = res + calculate(num,list);
        return res;
	}
	else
	{
		return 0;
	}
}



int main(){
    int num,dif,div,res=0;
    cin >> num;

    vector<int> list = {1,5,10,20,100};
     
    res = calculate(num,list);
    cout << res << "\n";

    
    return 0;
}