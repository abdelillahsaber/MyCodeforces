#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    bool hard = false;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        p[i] ? hard = true : hard;
    }
    hard ? cout << "HARD" : cout << "EASY";
    return 0;
}