#include <iostream>
 
using namespace std;
 
int main()
{
    long long n, k;
    cin >> n >> k;
    long long middle;
    if (n % 2 == 0)
    {
        middle = n / 2;
        if (k <= middle)
        {
            cout << k * 2 - 1;
        }
        else
        {
            cout << k * 2 - n;
        }
    }
    else
    {
        middle = n / 2 + 1;
        if (k <= middle)
        {
            cout << k * 2 - 1;
        }
        else
        {
            cout << k * 2 - n - 1;
        }
    }
    return 0;
}