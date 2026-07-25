#include<iostream>
#include<cmath>
 
using namespace std;
 
int main() {
    long long n,m,a;
    cin >> n >> m >> a;
    long long length_stones = (long long)ceil((double)n / a);
    long long width_stones = (long long)ceil((double)m / a);
    cout << length_stones * width_stones << endl;
    return 0;
}