#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    sort(a.begin(), a.end());
    int count = 0;
    int current_sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        current_sum += a[i];
        count++;
        if (current_sum > total - current_sum) {
            break;
        }
    }
    cout << count;
    return 0;
}