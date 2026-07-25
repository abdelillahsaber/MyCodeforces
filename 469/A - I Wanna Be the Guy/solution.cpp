#include<iostream>
#include<set>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    set<int> s;
    bool can = false;
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    int y;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        int b;
        cin >> b;
        s.insert(b);
    }    
    if (s.size() == n) can = true;
    can ? cout << "I become the guy." : cout << "Oh, my keyboard!";
    return 0;
}