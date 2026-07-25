#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main() {
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    int maxP = 0;
    for (int i = 0; i*a <= n; i++) {
        for (int j = 0; i*a+j*b <= n; j++) {
            int rem = n - (i*a+j*b);
            if (rem%c==0)
            {
                int k = rem/c;
                maxP = max(maxP,i+j+k);
            }
        }
    }
    cout << maxP << endl;
    return 0;
}