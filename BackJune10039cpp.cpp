#include <iostream>
using namespace std;
#if 0
int main()
{
	int a, b, c, d, e;
	cin >> a;
	if (a > 100 || a < 0 || a % 5 != 0)
	{
		return false;
	}
	else if (a >= 0 && a <= 40 && a % 5 == 0)
	{
		a = 40;
	}



	cin >> b;
	if (b > 100 || b < 0 || b % 5 != 0)
	{
		return false;
	}
	else if (b >= 0 && b <= 40 && b % 5 == 0)
	{
		b = 40;
	}



	cin >> c;
	if (c > 100 || c < 0 || c % 5 != 0)
	{
		return false;
	}
	else if (c >= 0 && c <= 40 && c % 5 == 0)
	{
		c = 40;
	}



	cin >> d;
	if (d > 100 || d < 0 || d % 5 != 0)
	{
		return false;
	}
	else if (d >= 0 && d <= 40 && d % 5 == 0)
	{
		d = 40;
	}



	cin >> e;
	if (e > 100 || e < 0 || e % 5 != 0)
	{
		return false;
	}
	else if (e >= 0 && e <= 40 && e % 5 == 0)
	{
		e = 40;
	}

	cout << (a + b + c + d + e) / 5;


}
#endif