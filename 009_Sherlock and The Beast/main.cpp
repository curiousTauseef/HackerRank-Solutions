#include <iostream>
#include <string>

using namespace std;

string DecentNumber(int);

int main()
{
	int t;
	cin >> t;

	for (int a0 = 0; a0 < t; a0++)
	{
		int n;
		cin >> n;

		cout << DecentNumber(n) << endl;
	}

	return 0;
}

string DecentNumber(int i_n)
{
	string decent;
	int numOfFives = i_n;
	int numOfThrees = 0;

	while (numOfFives % 3 != 0 || numOfThrees % 5 != 0)
	{
		if (numOfFives == 0)
		{
			return "-1";
		}
		numOfFives--;
		numOfThrees = i_n - numOfFives;
	}
	
	while (numOfFives > 0)
	{
		decent += "5";
		numOfFives--;
	}
	while (numOfThrees > 0)
	{
		decent += "3";
		numOfThrees--;
	}
	
	return decent;
}