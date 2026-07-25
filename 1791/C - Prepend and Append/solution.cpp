#include<iostream>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int left = 0;
    int right = n-1;
    int c = n;
    while (left <= right)
    {
        if (s[left]!=s[right]) {
            left++;
            right--;
            c-=2;
        } else {
            break;
        }
    }
    cout << c << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}