#include<iostream>
#include<vector>
 
using namespace std;
 
void solve() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < n - k; i++)
    {
        if (s[i] == '1')
        {
            s[i] = '0';
            if (s[i+k] == '0')
            {
                s[i+k] = '1';
            } else {
                s[i+k] = '0';
            }
        }
    }
    bool isZero = true;
    for (int i = n-k; i < n; i++)
    {
        if (s[i] == '1')
        {
            isZero = false;
            break;
        }
    }
    isZero ? cout << "YES" << endl: cout << "NO" << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}