#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(b.rbegin(), b.rend());
    long long x = b[0];
    long long y = b[1];
    bool isSeq = true;
    for (int i = 0; i < n-2; i++)
    {
        if (!(b[i+2]==b[i]%b[i+1]))
        {
            isSeq = false;
            break;
        }
    }
    isSeq ? cout << x << ' ' << y << "
" : cout << -1 << "
";
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