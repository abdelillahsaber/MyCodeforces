#include<iostream>
 
using namespace std;
 
void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    if (((a<=b) && (b<=c)) || ((c<=b) && (b<=a))) cout << b << endl;
    if (((c<=a) && (a<=b)) || ((b<=a) && (a<=c))) cout << a << endl;
    if (((a<=c) && (c<=b)) || ((b<=c) && (c<=a))) cout << c << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}