#include<iostream>
#include<vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    vector<int> g(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i] >> g[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (h[i] == g[j])
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}