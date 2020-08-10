#include <iostream>

using namespace std;


int Factorial(int n)
{
	if (n > 12 || n < 0)
		return false;

	if (n == 1 || n==0)
	{
		return 1;

	}
	
	{
		return Factorial(n) * n;//3

	}

}

#if 0
int main()
{
	int n;
	cin >> n;

	int Result=Factorial(n);
	cout << "Result: " << Result << endl;


}
#endif
