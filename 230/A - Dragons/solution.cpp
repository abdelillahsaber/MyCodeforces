#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main() {
    int s,n;
    cin >> s >> n;
    vector<pair<int,int>> dragons(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dragons[i].first >> dragons[i].second;
    }
    sort(dragons.begin(),dragons.end());
    bool possible = true;
    for (int i = 0; i < n; i++) {
        if (s <= dragons[i].first)
        {
            possible = false;
            break;
        }
        s+=dragons[i].second;
    }
    possible? cout << "YES" : cout << "NO";
    return 0;
}