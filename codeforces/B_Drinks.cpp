#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,loop,sum =0;
    cin >> n;
    loop = n;
    while (loop--)
    {
        int num;
        cin >> num;
        sum = sum + num;
    }

    double frac = (float)sum/n;

    cout << fixed << setprecision(12) << frac << endl;
    return 0;
}