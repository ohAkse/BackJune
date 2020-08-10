


#include <iostream>


using namespace std;
#if 0
int main()
{
	int a, b, c;
	cin >> a >> b >> c;


	int Result = 0;
	if ((a == b) &&(b == c))
	{
		Result = a;
	}

	else if ((a == b) && (a!=c))
	{
		if ((a > c) && (b>c))
			Result = c;
		else if(a<c)
		Result = a;
	}
	else if ((b == c) && (b!=a))
	{
		if ((b > a) && (c>a))
			Result = a;
		else if(b<a)
			Result = b;
	}
	else if ((c == a) && (c!=b))
	{
		if ((a > b)&&(c>b))
			Result = b;
		else if( b<a)
			Result = a;
	}
	//다 다르게 나오는것.
	else if (a != b != c)
	{
		//a가 젤 큰경우
		if (((a > b) && (a > c)) && (b < c))
		{
			Result = c;
		}
		else if (((a > b) && (a > c)) && (b > c))
		{
			Result = b;
		}
		//b가 젤 큰경우 
		else if (((b > c) && (b > a)) && (c > a))
		{
			Result = c;
		}
		else if (((b > c) && (b > a)) && (c < a))
		{
			Result = a;
		}
		//c가 젤 큰경우
		else if (((c > a) && (c > b)) && (a < b))
		{
			Result = b;
		}
		else if (((c > a) && (c > b)) && (a > b))
		{
			Result = a;
		}

	}

	cout << Result;

}
