#include <iostream>
#include <string>
#include <unordered_map>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    unordered_map<string, int> database;
    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;
        if (database.find(name) == database.end()) {
            database[name] = 0;
            cout << "OK" << endl;
        } else {
            database[name]++;
            string new_name = name + to_string(database[name]);
            cout << new_name << "
";
            database[new_name] = 0;
        }
    }
    return 0;
}