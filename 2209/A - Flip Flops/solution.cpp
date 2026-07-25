#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
 
using namespace std;
 
void solve() {
    int n;
    long long c,k;
    cin >> n >> c >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] > c) break;
        long long diff = c-a[i];
        if (k>=diff) {
            k-=diff;
            a[i]+=diff;
            c+=a[i];
        } else {
            a[i] += k;
            k-=k;
            c+=a[i];
        }
    }
    cout << c << endl;
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