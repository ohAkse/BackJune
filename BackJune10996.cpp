#include <iostream>

using namespace std;


int main()
{
	int n, i, j, z;
	cin >> n;

	for (z = 0; z < n; z++)
	{
		for (i=0; i < n; i++)
		{
			if (i % 2 == 0)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
		for (j=0; j < n; j++)
		{
			if (j % 2 == 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;

	}



}
