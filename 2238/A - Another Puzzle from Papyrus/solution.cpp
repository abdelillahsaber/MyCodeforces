#include<iostream>
#include<algorithm>
#include<vector>
 
using namespace std;
 
void solve() {
    int n,c;
    cin >> n >> c;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    bool possible_no_sort = true;
    int cost_no_sort = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            possible_no_sort = false;
            break;
        }
        cost_no_sort += (a[i] - b[i]);
    }
    vector<int> a_sorted = a;
    vector<int> b_sorted = b;
    sort(a_sorted.begin(), a_sorted.end());
    sort(b_sorted.begin(), b_sorted.end());
    bool possible_with_sort = true;
    int cost_with_sort = c;
    for (int i = 0; i < n; i++) {
        if (a_sorted[i] < b_sorted[i]) {
            possible_with_sort = false;
            break;
        }
        cost_with_sort += (a_sorted[i] - b_sorted[i]);
    }
    if (!possible_no_sort && !possible_with_sort) {
        cout << -1 << endl;
    } else if (possible_no_sort && !possible_with_sort) {
        cout << cost_no_sort << endl;
    } else if (!possible_no_sort && possible_with_sort) {
        cout << cost_with_sort << endl;
    } else {
        cout << min(cost_no_sort, cost_with_sort) << endl;
    }
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