#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<bool> fired(n, false);
    for (int count = 0; count < n; count++) {
        int min_idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (!fired[i]) {
                if (min_idx == -1 || a[i] < a[min_idx]) {
                    min_idx = i;
                }
            }
        }
        for (int j = min_idx + 1; j < n; j++)
        {
            if (a[j] > a[min_idx]) {
                a[j] = a[min_idx];
                break;
            }
        }
        fired[min_idx] = true;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
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