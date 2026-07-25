#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mincalls = n;
        for (int i = 0; i < n; i++)
        {
            int target = a[i];
            int left = 0;
            int right = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j] < target) {
                    left++;
                } else if (a[j] > target) {
                    right++;
                }
            }
            int calls = max(left,right);
            mincalls = min(calls, mincalls);
        }
        cout << mincalls << endl;
    }
    return 0;
}