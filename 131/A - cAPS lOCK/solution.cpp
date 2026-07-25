#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
    bool thecase = true;
    for (int i = 1; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            thecase = false;
            break;
        }
    }
    if (thecase)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (isupper(s[i]))
            {
                s[i] = tolower(s[i]);
            }
            else
            {
                s[i] = toupper(s[i]);
            }
        }
    }
    cout << s << endl;
    return 0;
}