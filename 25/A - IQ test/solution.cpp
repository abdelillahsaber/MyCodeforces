#include<iostream>
#include<vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int odd = 0;
    int idxodd = 0;
    int even = 0;
    int idxeven = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i]%2==0)
        {
            even++;
            idxeven = i+1;
        } else {
            odd++;
            idxodd = i+1;
        }
    }
    if (even == 1)
    {
        cout << idxeven;
    } else {
        cout << idxodd;
    }
    return 0;
}