#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    if (k > 1 || is_sorted(a.begin(),a.end())) cout << "YES" << endl;
    else cout << "NO" << endl;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}