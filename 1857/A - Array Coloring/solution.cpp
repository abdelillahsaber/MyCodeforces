#include<iostream>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int c = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x%2==1) c++;
    }
    if (c%2==0) cout << "yes" << endl;
    else cout << "no" << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}