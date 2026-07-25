#include<iostream>
#include<vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> a(m+1);
    a[0] = 1;
    for (int i = 1; i <= m; i++) cin >> a[i];
    long long c = 0;
    for (int i = 1; i <= m; i++)
    {
        c += (a[i] - a[i-1] + n) % n;
    }
    cout << c << endl;
}