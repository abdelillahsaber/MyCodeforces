#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] > a[i+1]) {
            long long temp = a[i];
            a[i] = a[i+1];
            a[i+1] += temp;
        }
    }
    cout << a[n-1] << endl;
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