#include<iostream>
 
using namespace std;
 
long long f(long long n);
 
int main() {
    long long n;
    cin >> n;
    cout << f(n);
    return 0;
}
 
long long f(long long n) {
    if (n%2==0) {
        return n/2;
    } else {
        return -(n+1)/2;
    }
}