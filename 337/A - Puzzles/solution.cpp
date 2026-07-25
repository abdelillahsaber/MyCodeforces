#include<iostream>
#include<algorithm>
#include<vector>
 
using namespace std;
 
int main() {
    int n,m;
    cin >> n >> m;
    vector<int> f(m);
    for (int i = 0; i < m; i++)
    {
        cin >> f[i];
    }
    sort(f.begin(),f.end());
    int diff = 1000;
    for (int i = 0; i <= m - n; i++)
    {
        diff = min(diff,f[i+n-1]-f[i]);
    }
    cout << diff << endl;
    return 0;
}