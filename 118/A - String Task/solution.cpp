#include <iostream>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    string t = "";
    for (int i = 0; i < s.size(); i++)
    {
        if ('A' <= s[i] && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (!(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i'))
        {
            t+='.';
            t+=s[i];
        }
    }
    cout << t;
    return 0;
}