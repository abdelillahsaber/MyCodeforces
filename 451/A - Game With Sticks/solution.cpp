#include<iostream>
 
using namespace std;
 
int main() {
    string player1 = "Akshat";
    string player2 = "Malvika";
    int n,m;
    cin >> n >> m;
    if (min(m,n)%2==0) {
        cout << player2 << endl;
    } else cout << player1 << endl;
    return 0;
}