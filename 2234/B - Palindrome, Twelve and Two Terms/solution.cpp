#include<iostream>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    long long rem = n%12;
    long long a = 0;
    if (rem >= 0 && rem <= 9)
    {
        a = rem;
    } else if (rem == 11) {
        a = 11;
    } else if (rem == 10) {
        a = 22;
    }
    if (a <= n) {
        long long b = n-a;
        cout << a << " " << b << endl;
    } else {
        cout << -1 << endl;
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}