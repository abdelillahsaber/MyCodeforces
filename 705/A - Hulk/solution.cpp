#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    string hate = "I hate ";
    string love = "I love ";
    string that = "that ";
    string it = "it";
    for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 == 0)
        {
            cout << hate << that;
        }
        else
        {
            cout << love << that;
        }
    }
    if (n % 2 == 1)
    {
        cout << hate << it;
    }
    else
    {
        cout << love << it;
    }
    return 0;
}