#include <iostream>

using namespace std;

int main()
{
	int n;
	int i, j;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			cout << " ";
		}
		while (j < n)
		{
			cout << "#";
			j++;
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}