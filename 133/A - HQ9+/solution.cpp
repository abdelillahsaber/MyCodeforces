#include <iostream>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
    bool contains = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            contains = true;
            break;
        }
    }
    contains ? cout << "YES" : cout << "NO";
    return 0;
}