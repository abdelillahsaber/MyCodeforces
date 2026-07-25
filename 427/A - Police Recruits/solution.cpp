#include<iostream>
#include<vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int untreated = 0;
    int free = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == -1)
        {
            if (free >= 1) {
                free--;
            } else if (free == 0) {
                untreated++;
            }
        } else {
            free+=a;
        }
    }
    cout << untreated << endl;
    return 0;
}