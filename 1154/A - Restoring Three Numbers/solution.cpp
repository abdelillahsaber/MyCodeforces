#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int a = v[3]-v[0];
    int b = v[3]-v[1];
    int c = v[3]-v[2];
    cout << a << " ";
    cout << b << " ";
    cout << c << endl;
    return 0;
}