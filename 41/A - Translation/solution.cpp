#include <iostream>
 
using namespace std;
 
int main() {
    string s,t;
    cin >> s;
    cin >> t;
    if (s.size() != t.size())
    {
        cout << "NO";
        return 0;
    }
    
    int n = s.size();
    bool iscorrect = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[n-1-i])
        {
            iscorrect = false;
            break;
        }
    }
    iscorrect ? cout << "YES" : cout << "NO";
    return 0;
}