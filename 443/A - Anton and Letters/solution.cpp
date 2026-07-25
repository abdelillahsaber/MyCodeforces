#include<iostream>
#include<string>
#include<set>
 
using namespace std;
 
int main() {
    string s;
    getline(cin, s);
    int len = s.size();
    if (len <= 2) {
        cout << 0;
        return 0;
    }
    set<char> unique;
    for (int i = 1; i < len; i+=3)
    {
        unique.insert(s[i]);
    }
    cout << unique.size();
    return 0;
}