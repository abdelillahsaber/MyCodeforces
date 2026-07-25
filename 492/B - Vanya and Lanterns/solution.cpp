#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    double l;
    cin >> n >> l;
    vector<double> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
sort(a.begin(),a.end());
double gap = 0;
for (int i = 0; i < n-1; i++)
{
    gap = max(gap, (a[i+1] - a[i])/2);
}
double d = max(gap, a[0]);
d = max(d,l-a[n-1]);
cout << fixed << setprecision(10) << d << endl;
return 0;
}