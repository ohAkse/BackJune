#include <iostream>
using namespace std;


int main()
{
	int n, k; 
	int Money[10];
	cin >> n >> k;//
if(n<1 || n>10 || k<1 || k>100000000)
return -1;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		Money[i] = input;

	}
	int Result = 0;

	for (int i = n-1; i >= 0; i--)
	{
		if (Money[i] <= k)
		{
			int j = 1;
			for ( j = 0; j <= i; j++)
				if (k / Money[i] > 0)
				{
					Result = Result+k / Money[i];
					k = k %Money[i];
				}
		}
	}

	cout << Result;

}
