#include<iostream>
 
using namespace std;
 
int main() {
    string a,b;
    cin >> a >> b;
    int s = a.size();
    string res = "";
    for (int i = 0; i < s; i++)
    {
        if (a[i]==b[i])
        {
            res+="0";
        } else res += "1";
    }
    cout << res;
    return 0;
}