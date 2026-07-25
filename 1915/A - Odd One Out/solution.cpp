#include<iostream>
 
using namespace std;
 
void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    if (a==b)
    {
        cout << c << endl;
    } else {
        if (b==c) {
            cout << a << endl;
        } else {
            cout << b << endl;
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}