#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int q;
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;
        int left = 0;
        int right = n-1;
        int ans = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (x[mid] <= m)
            {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}