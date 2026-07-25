#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    for (int j = 0; j < m; ++j) cout << "#";
    cout << "
";
    for (int i = 0; i < n - 2; ++i) {
        if (i % 4 == 0) {
            for (int j = 0; j < m - 1; ++j) cout << ".";
            cout << "#" << "
";
        } else if (i % 2 == 0) {
            cout << "#";
            for (int j = 0; j < m - 1; ++j) cout << ".";
            cout << "
";
        } else {
            for (int j = 0; j < m; ++j) cout << "#";
            cout << "
";
        }
    }
    for (int j = 0; j < m; ++j) cout << "#";
    cout << "
";
    return 0;
}