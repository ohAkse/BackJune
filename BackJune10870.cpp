#include <iostream>

using namespace std;


int GetPiboNum(int n)
{
	int nn = 0;
	
	if (n > 20 || n < 0)
		return false;
	
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n == 2)
		return 1;


	else
	{
	return	GetPiboNum(n - 1) + GetPiboNum(n - 2);//���ڸ� ������.. �� ���Ϸ��� ��� �ؾ��ұ�..
	

	}




}


int main()
{
	int n;
	cin >> n;
	int Result = GetPiboNum(n);
	cout << Result;


}
