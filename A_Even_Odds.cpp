#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int range,pos,mid; 
    cin >> range >> pos;
    
    
    mid = ceil(range/2.0);

   
    if(pos<=mid) cout << (2*pos) - 1 << "\n";
    else cout << (pos-mid)*2 << "\n";
    
    
    return 0;
}

// 1000000000000 500000000001