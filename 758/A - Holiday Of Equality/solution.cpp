#include<iostream>
#include<vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    int m = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m = max(m,a[i]);
    }
    long long s = 0;
    for (int i = 0; i < n; i++) {
        s += (m-a[i]);
    }
    cout << s << endl;
}