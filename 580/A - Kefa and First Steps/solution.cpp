#include<iostream>
#include<algorithm>
#include<vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maximum = 1;
    int count = 1;
    long long *p = &a[0];
    for (p; p < &a[0]+n-1; p++) {
        if (*p <= *(p+1))
        {
            count++;
        } else {
            maximum = max(count, maximum);
            count = 1;
        }
    }
    maximum = max(count, maximum);
    cout << maximum;
    return 0;
}