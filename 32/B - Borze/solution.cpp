#include<iostream>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
    int n = s.size();
    int c = 0;
    while (c < n-1) {
        if ((s[c]=='-') && (s[c+1]=='-')) {
            cout << '2';
            c+=2;
        } else if ((s[c]=='-') && (s[c+1]=='.')) {
            cout << '1';
            c+=2;
        } else {
            cout << '0';
            c++;
        }
    }
    if (s[c]=='.') {
        cout << '0';
    }
    return 0;
}