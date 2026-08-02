#include<iostream>
 
using namespace std;
 
void solve() {
    int k;
    cin >> k;
    int count = 0;
    int num = 1;
    while (true) {
        if (num % 3 != 0 && num % 10 != 3) {
            count++;
            if (count == k) {
                cout << num << "
";
                return;
            }
        }
        num++;
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