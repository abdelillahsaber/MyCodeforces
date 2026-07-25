#include<iostream>
#include<vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> x;
    vector<int> y;
    vector<int> z;
    for (int i = 0; i < n; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        x.push_back(a);
        y.push_back(b);
        z.push_back(c);
    }
    int k = 0;
    int l = 0;
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        k += x[i];
        l += y[i];
        m += z[i];
    }
    if (k || l || m)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}