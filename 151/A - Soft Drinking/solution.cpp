#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main() {
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totalMl = k*l;
    int totalSlices = c*d;
    int drink = totalMl / nl;
    int lime = totalSlices;
    int salt = p / np;
    int minpossible = min(drink,min(salt,lime));
    cout << minpossible / n << endl;
    return 0;
}