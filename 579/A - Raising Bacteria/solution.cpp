#include<iostream>
 
using namespace std;
 
int main() {
    long long x;
    cin >> x;
    int c = 0;
    while (x > 0)
    {
        if (x%2 != 0) {
            c++;
        }
        x /= 2;
    }
    cout << c;
    return 0;
}