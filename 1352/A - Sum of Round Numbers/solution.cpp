#include<iostream>
#include<cmath>
#include<vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> round;
    int powerof10 = 1;
    while (n>0) {
        int digit = n%10;
        if (digit != 0) round.push_back(powerof10*digit);
        n/=10;
        powerof10*=10;
    }
    cout << round.size() << endl;
    for (int i = 0; i<round.size(); i++) cout << round[i] << " ";
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}