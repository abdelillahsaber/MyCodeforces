#include <iostream>
 
using namespace std;
 
void solve()
{
    long long n;
    cin >> n;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    long long count = 0;
    while (n > 1)
    {
        if (n % 6 == 0)
        {
            n /= 6;
            count++;
        }
        else if (n % 3 == 0)
        {
            n *= 2;
            count++;
        }
        else
        {
            count = -1;
            break;
        }
    }
    cout << count << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}