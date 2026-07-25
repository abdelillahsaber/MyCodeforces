#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main() {
    string name1;
    string name2;
    string s;
    cin >> name1 >> name2 >> s;
    string sum = name1 + name2;
    sort(sum.begin(),sum.end());
    sort(s.begin(),s.end());
    if (sum == s)
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}