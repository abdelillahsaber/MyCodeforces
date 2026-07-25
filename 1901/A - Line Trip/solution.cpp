#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
void solve() {
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int c = 0;
    for (int i = 0; i < n-1; i++) {
        c = max(c,(a[i+1]-a[i]));
    }
    c = max(c, (x-a[n-1])*2);
    c = max(c,a[0]);
    cout << c << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}