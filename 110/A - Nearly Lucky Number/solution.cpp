#include<iostream>
 
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    int count = 0;
    while (n)
    {
        int a = n % 10;
        if (a == 7 || a == 4) count++;
        n /= 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}