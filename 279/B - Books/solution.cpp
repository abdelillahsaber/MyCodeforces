#include<iostream>
#include<vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n,t;
    cin >> n >> t;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long current_sum = 0;
    int max_count = 0;
    int left = 0;
    for (int right = 0; right < n; right++) {
        current_sum += a[right];
        while (current_sum > t) {
            current_sum -= a[left];
            left++;
        }
        max_count = max(max_count, right - left + 1);
    }
    cout << max_count << endl;
    return 0;
}