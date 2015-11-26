#include <iostream>

using namespace std;

unsigned long long FindDigits(int);

int main()
{
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++)
	{
		int n;
		cin >> n;
		cout << FindDigits(n) << endl;
	}
	system("PAUSE");
	return 0;
}

unsigned long long FindDigits(int i_n)
{
	unsigned long long digitsDivisible = 0;
	int digit;
	int temp = i_n;

	while (temp > 0)
	{
		digit = temp % 10;

		if (digit!=0 && i_n % digit == 0) //First check for zero, if it is zero then compiler doesn't check for second condition, avoiding division by zero
		{
			digitsDivisible++;
		}

		temp = temp / 10;
	}

	return digitsDivisible;
}