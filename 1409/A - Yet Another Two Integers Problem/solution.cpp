#include<iostream>
 
using namespace std;
 
void solve() {
    long long a,b;
    cin >> a >> b;
    long long c = abs(a-b);
    long long k = c/10 + ((c%10==0) ? 0 : 1);
    cout << k << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}