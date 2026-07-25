#include<iostream>
 
using namespace std;
 
int main() {
    int k,r;
    cin >> k >> r;
    int n = 1;
    while (((k*n)%10 != r) && (k*n)%10 != 0)
    {
        n++;
    }
    cout << n;
    return 0;
}