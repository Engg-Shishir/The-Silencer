


#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back

#define f first
#define s second
#define no cout << "NO\n"
#define yes cout << "YES\n"


void solve()
{

        int f1,s2;
        string first="",second="";
        cin >> f1 >> s2;
        while (f1--)
        {
            char get;
            cin >> get;
            first = first + get;
        }

        while (s2--)
        {
            char get;
            cin >> get;
            second = second + get;
        }
         
        int l1 = first.length();
        int l2 = second.length();
        
        if(l1==1 && l2==1) cout << "YES" << "\n";
        else if((l1==1 && l2==2) && (first[0]==second[0] && second[0]==second[1])){
            cout << "NO" << "\n";
        }
        else if((l1==2 && l2==1) && (first[0]==first[1] && first[1]==second[0])){
            cout << "NO" << "\n";
        }

        if(((first[l1-1]==first[l1-2]) || (second[l2-1]==second[l2-2])) && first[l1-1]==second[l2-1]) 
        cout << "NO" << "\n";
        else cout << "YES" << "\n";

        // if(first[first.length()-1] != second[second.length()-1]) cout << "YES" << "\n";
        // else{
        //     if(first.length() != second.length()){
        //         if(first.length() > second.length()){
        //             if((second[0] == second[second.length()-1]) && (first[0] != first[first.length()-1])) cout << "YES" << "\n";
        //             else cout << "NO" << "\n";
        //         }else{
        //             if((first[0] == first[first.length()-1]) && (second[0] != second[second.length()-1])) cout << "YES" << "\n";
        //             else cout << "NO" << "\n";
        //         }
        //     }else{
        //         cout << "YES" << "\n";
        //     }
        // }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t = 1;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}
