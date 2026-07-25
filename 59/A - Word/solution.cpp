#include <iostream>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int lower = 0;
    int upper = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if ('A' <= s[i] && s[i] <= 'Z')
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if (upper > lower)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if ('a' <= s[i] && s[i] <= 'z')
            {
                s[i]-=32;
            }
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if ('A' <= s[i] && s[i] <= 'Z')
            {
                s[i]+=32;
            }
        }
    }
    cout << s;
    return 0;
}