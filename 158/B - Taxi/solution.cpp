#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    map<int, int> counts;
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        counts[s]++;
    }
    int total_taxis = 0;
    total_taxis += counts[4];
    total_taxis += counts[3];
    counts[1] = max(0, counts[1] - counts[3]);
    total_taxis += counts[2] / 2;
    if (counts[2] % 2 != 0) {
        total_taxis += 1;
        counts[1] = max(0, counts[1] - 2);
    }
    if (counts[1] > 0) {
        total_taxis += (counts[1] + 3) / 4;
    }
    cout << total_taxis << endl;
    return 0;
}