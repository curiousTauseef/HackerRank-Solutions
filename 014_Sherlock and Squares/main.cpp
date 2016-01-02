#include <iostream>
#include <math.h>

using namespace std;

int PrimesCount(int, int);

int main()
{
	int t;
	int a, b;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		cout << PrimesCount(a,b) << endl;
	}

	system("PAUSE");
	return 0;
}

int PrimesCount(int i_a, int i_b)
{
	return floor(sqrt(i_b)) - ceil(sqrt(i_a)) + 1;
}