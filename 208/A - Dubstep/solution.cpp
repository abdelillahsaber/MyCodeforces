#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
    
    char* ptr = &s[0];
    char* end = ptr + s.length();
    bool space = false;
 
    while (ptr < end) {
        if (ptr + 2 < end && *ptr == 'W' && *(ptr+1) == 'U' && *(ptr+2) == 'B') {
            if (space) {
                cout << " ";
                space = false;
            }
            ptr += 3;
        } else {
            cout << *ptr;
            space = true;
            ptr++;
        }
    }
    return 0;
}