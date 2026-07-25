#include<iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int minP = 0;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        counter += b-a;
        minP = max(counter, minP);
    }
    cout << minP;
    return 0;
}