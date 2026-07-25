#include <iostream>
 
using namespace std;
 
bool isPerfect(int y);
int makePerfect(int y);
 
int main() {
    int year;
    cin >> year;
    int beautiful = makePerfect(year);
    cout << beautiful;
    return 0;
}
 
bool isPerfect(int y) {
    int a = y/1000;
    int b = (y/100) % 10;
    int c = (y/10) % 10;
    int d = y % 10;
    if (a != b && a != c && a != d && b != c && b != d && c != d) {
        return true;
    } else return false;
}
 
int makePerfect(int y) {
    while (true)
    {
        y++;
        if (isPerfect(y))
        {
            break;
        }
    }
    return y;
}