/*
    Problem Name : The Monk and Class Marks
    Source       : https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks
    Tutorial     : https://www.youtube.com/watch?v=zyGSg3U1K94
    Author       : Shishir Bhuiyan
    Codeforces   : The-Silencer
    Date         : 07/March/2023
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,multiset<string>> maps;
    int loop;
    cin >> loop;
    for (int i = 0; i < loop; i++)
    {
        int marks;
        string name;
        cin >> name >> marks;
        maps[marks].insert(name);
    }

    auto last_it = --maps.end(); // Current iterator
    
    while (true)
    {
        auto &students = (*last_it).second; // & use to avoide copying
        auto marks = (*last_it).first;
        for (auto student : students)
        {
            cout << student << " " << marks << "\n";
        }
        
        if(last_it == maps.begin()) break;
        last_it--;
    
    }

    return 0;
}

/*
Problem
Monk is a multi-talented person, and prepares results for his college in his free time. (Yes, he is still in love with his old college!) He gets a list of students with their marks. The maximum marks which can be obtained in the exam is 100.

The Monk is supposed to arrange the list in such a manner that the list is sorted in decreasing order of marks. And if two students have the same marks, they should be arranged in lexicographical manner.

Help Monk prepare the same!

Input format:
On the first line of the standard input, there is an integer N, denoting the number of students. N lines follow, which contain a string and an integer, denoting the name of the student and his marks.

Output format:
You must print the required list.

Constraints:
1 <= N <= 105
1 <= | Length of the name | <= 100
1 <= Marks <= 100

Sample Input : -------------------
3
Eve 78
Bob 99
Alice 78


Sample Output : ------------------
Bob 99
Alice 78
Eve 78
*/