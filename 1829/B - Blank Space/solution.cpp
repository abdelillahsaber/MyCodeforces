#include<iostream>
#include<algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int c = 0;
    int maximum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x==0)
        {
            c++;
            maximum = max(maximum, c);
        } else {
            c = 0;
        }
    }
    cout << maximum << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}