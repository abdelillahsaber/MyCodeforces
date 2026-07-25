#include<iostream>
#include<vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int left = 0;
    int right = n-1;
    int turn = 0;
    int sereja = 0;
    int dima = 0;
    int val;
    while (left <= right){
        if (a[left]<a[right]) {
            val = a[right];
            right--;
        } else {
            val = a[left];
            left++;
        }
        if (turn == 0) {
            sereja += val;
        } else {
            dima += val;
        }
        turn = 1 - turn;
    }
    cout << sereja << " " << dima;
    return 0;
}