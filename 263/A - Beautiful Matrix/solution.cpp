#include<iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
    int arr[25];
    int one = 0;
    for (int i = 0; i < 25; i++)
    {
        cin >> arr[i];
        if (arr[i])
        {
            one = i;
        }
    }
    int col = one % 5;
    int row = one / 5;
    cout << abs(col-2)+abs(row-2) << endl;
    return 0;
}