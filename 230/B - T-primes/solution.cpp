#include<iostream>
#include<vector>
#include<cmath>
 
using namespace std;
 
bool isPrime(long long n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
 
    for (long long i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i+2) == 0)
        {
            return false;
        }
    }
    return true;
}
 
bool isTprime(long long x) {
    long long r = round(sqrt(x));
    if (r*r==x && isPrime(r))
    {
        return true;
    } else return false;
}
 
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        isTprime(x) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}