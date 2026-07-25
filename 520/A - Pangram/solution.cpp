#include<iostream>
#include<set>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string word;
    cin >> word;
    if (n<26) {
        cout << "NO" << endl;
        return 0;
    }
    set<char> unique;
    for (char c: word) {
        unique.insert(tolower(c));
    }
    if (unique.size() == 26)
    {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}