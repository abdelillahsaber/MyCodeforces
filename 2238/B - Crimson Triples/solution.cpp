#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    long long count = 0;
    for (long long b = 1; b <= n; b++)
    {
        long long multiples = n / b;
        count += (multiples * multiples);
    }
    cout << count << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}