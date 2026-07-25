#include<iostream>
 
using namespace std;
 
int main() {
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int q = n / m;
    int r = n % m;
    int result;
    if (m*a > b) {
        result = min(b*q + a*r, (q+1)*b);
    } else {
        result = a*n;
    }
    cout << result << endl;
    return 0;
}