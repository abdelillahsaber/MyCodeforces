#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    int target = a[k-1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= target && a[i]>0)
        {
            count++;
        } else break;
    }
    cout << count;
    return 0;
}