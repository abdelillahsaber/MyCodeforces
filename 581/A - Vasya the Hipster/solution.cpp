#include<iostream>
 
using namespace std;
 
int main() {
    int a,b;
    cin >> a >> b;
    int d = min(a,b);
    int s = abs(a-b)/2;
    cout << d << " " << s;
    return 0;
}