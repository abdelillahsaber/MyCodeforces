#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<string> magnets(n);
    int count = 1;
    cin >> magnets[0];
    for (int i = 1; i < n; i++)
    {
        cin >> magnets[i];
        if (magnets[i] != magnets[i-1])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}