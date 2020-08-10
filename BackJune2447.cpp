#include <iostream>

using namespace std;


char arr[3000][3000];

void InitArray()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3000; i++)
	{
		for (j = 0; j < 3000; j++)
		{
			arr[i][j] = ' ';

		}


	}


}
void Make(int n, int x, int y)
{
	if (n == 1)
	{
		arr[x][y] = '*';

		return;
	}

	int nRealValue = n / 3; // 3^n의 값으로 실질적으로 만들어질 값.
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == 1 && j == 1)
			{
				continue;

			}
			else
				Make(nRealValue, x+(nRealValue * i),  y+(nRealValue * j));


		}


	}

}


int main()
{
	int n = 0;
	cin >> n;
	InitArray();
	Make(n, 0, 0);

	for (int i = 0; i <n; i++)
	{
		for (int j = 0; j <n; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;

	}

}
