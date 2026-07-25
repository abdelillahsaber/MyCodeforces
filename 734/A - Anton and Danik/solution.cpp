#include<iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int danik = 0;
    int anton = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            anton++;
        } else {
            danik++;
        }
    }
    if (anton > danik)
    {
        cout << "Anton";
    }
    else if (anton < danik)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
    return 0;
}