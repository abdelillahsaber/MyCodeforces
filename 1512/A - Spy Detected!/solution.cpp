#include <iostream>
using namespace std; 
 
int main() { 
	int t;
	cin >> t;
	int *arr = new int[t];
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		int *a = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> a[j];
		}
		int x,y,z,temp;
		for (int j = 0; j < n-2; j++)
		{
			x = a[j];
			y = a[j+1];
			z = a[j+2];
			if (x == y)
			{
				if (y != z)
				{
					arr[i] = j+3;
					break;
				}
			}
			else if (x != y)
			{
				if (x == z)
				{
					arr[i] = j+2;
					break;
				}
				else if (y == z)
				{
					arr[i] = j+1;
					break;
				}
			}
		}
		delete[] a;
	}
	for (int i = 0; i < t; i++)
	{
		cout << arr[i] << endl;
	}
	delete[] arr;
	return 0;
}