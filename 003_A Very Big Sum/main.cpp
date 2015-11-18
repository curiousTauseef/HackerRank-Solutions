#include <iostream>

using namespace std;

int main()
{
	long long int n;
	long long int sum = 0;

	cin >> n;

	int * array = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
		sum = sum + array[i];
	}

	cout << sum << endl;

	system("PAUSE");
	return 0;
}