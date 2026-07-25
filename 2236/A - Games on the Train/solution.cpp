#include<iostream>
#include<vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    int maximum = 0;
    int minimum = 7;
    for (int i = 0; i < n; i++)
    {
        if (h[i] >= maximum)
        {
            maximum = h[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (h[i] <= minimum)
        {
            minimum = h[i];
        }
    }
    int k = maximum - minimum + 1;
    cout << k << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}