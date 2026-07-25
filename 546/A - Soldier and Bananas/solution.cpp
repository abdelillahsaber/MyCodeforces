#include<iostream>
 
using namespace std;
 
int main() {
    int k,n,w;
    cin >> k >> n >> w;
    int cf = 0;
    for (int i = 1; i <= w; i++)
    {
        cf += i;
    }
    int need = cf*k;
    cout << max(0,need-n);
    return 0;
}