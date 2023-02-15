/*
    Problem Name : Dubstep
    Source       : https://codeforces.com/problemset/problem/208/A
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 15/Feb/2023
    Time         : 12:30 AM
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    string get,sub="",res="";
    getline(cin, get);
    int cnt = 0;
    
    for (int i = 0; i < get.length(); i++)
    {
        if(get[i]=='W') {
            if(get[i+1]=='U'&& get[i+2]=='B' && sub=="") sub=sub+get[i];
            else res = res + get[i];
        }else if(get[i]=='U'){
            if(sub=="W") sub=sub+get[i];
            else res = res + get[i];
        }else if(get[i]=='B'){
            if(sub=="WU") sub=sub+get[i];
            else res = res + get[i];
        }else{
          res = res + get[i];
        }
        if(sub=="WUB"){
            if(res=="" || res[res.length()-1]==' '){
                 sub="";
            }
            else{
                res = res +" ";
                sub = "";
            } 
        }

    }

    cout << res << "\n";
  
    return 0;
}


/**
 * 
 * 
 *         // if(get[i]=='W' || get[i]=='U' || get[i]=='B'){

        if(sub!="WUB"){
            // sub = sub + get[i];
        }
        
        if(sub=="WUB"){
            if(res=="") sub="";
            else{
                if(res[res.length()-1]==' ') sub ="";
                else{
                    res = res +" ";
                    sub = "";
                }
            }  
        }
        // }
        // sub = sub + get[i];
*/