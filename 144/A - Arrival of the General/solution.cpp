#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int maxh = -1;
    int minh = 101;
    int maxidx = 0;
    int minidx = 0;
    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;
        if (h > maxh)
        {
            maxh = h;
            maxidx = i;
        }
        if (h <= minh)
        {
            minh = h;
            minidx = i;
        }
    }
    int result = maxidx + (n - 1 - minidx);
    if (maxidx > minidx)
        result--;
    cout << result;
    return 0;
}