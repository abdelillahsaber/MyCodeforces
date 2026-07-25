#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int x;
    cin >> x;
    int steps = ceil((double)x/5);
    cout << steps;
    return 0;
}