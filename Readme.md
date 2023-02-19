# Compitative Programming Problem
<details>
<summary>Cpp primary setup</summary>

```cpp
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
```
</details>








> ## Date: 08/02/2023
+ `Set precision :` cout << fixed << setprecision(2) << num << endl;
+ `Type casting  :` 
   > double frac = (float) sum/n;
   
   > double frac =  sum/2.0;


> ## Date : 09/02/2023
  + `Get largest value from fraction value :` int ok = ceil((float)first/second);
  + If the time limit is 1 sec, your processor is able to execute 10^8 operations.
  + In C++ use scanf/printf instead of cin/cout

> ## Date : 10/02/2023
  + `Int` range : ~10^9
  + `Long Long int`  range : ~10^18
  + `string length` : string.length();
  + `define boolean var` : bool Name;
  + `\n` is better than `endl`
  + Concatinate two vector :
  ```html
  vector<int> A;
  vector<int> B;
  vector<int> AB;

  AB = A;
  AB.insert(AB.end(), B.begin(), B.end());
  ```
> ## Date : 11/02/2023
+ `Sort vector :` sort( box.begin(), box.end() );

> ## Date : 12/02/2023
  + `Find index number from vector :`
  ```cpp
    int getIndex(vector<int>list,int k){
      int index;
      auto it = find(list.begin(), list.end(), k);
      if (it != list.end())  index = it - list.begin();
  
      return index;
    }
 ```
  + `Vector maximum value : ` *max_element (list.begin(), list.end());
  + `Vector minimum value : ` *min_element (list.begin(), list.end());
  + `swap to var : ` swap(var1, var2);
  + ` Declare pair in vector : ` vector< pair <int,int> > vect;
      + `Insert into vector pair : ` vect.push_back(make_pair(a,b) );
      + `Get vector pair value : ` vect[i].first, vect[i].second

> ## Date : 13/02/2023
+ `Macro : ` 
```cpp
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
```
+ `Sort vector as a decending order : ` sort(list.begin(), list.end(), greater <>());


> ## Date : 15/02/2023
+ `get input a line :` getline(cin, strVar);



> ## Date : 16/02/2023
+ `define set stl :` set<int> name;
   + Sets are a type of associative container in which each element has to be unique 
   + insert : `name.insert(a);`
   + size   : `name.size()`
   + maximum value find : `name.max_size()`    

> ## Date : 18/02/2023
+ Applied recursibe function