#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	int sumOfDiag1 = 0;
	int sumOfDiag2 = 0;
	cin >> n;

	vector< vector<int> > a(n, vector<int>(n));

	for (int a_i = 0; a_i < n; a_i++)
	{
		for (int a_j = 0; a_j < n; a_j++)
		{
			cin >> a[a_i][a_j];
		}
	}

	for (int a_i = 0; a_i < n; a_i++)
	{
		sumOfDiag1 += a[a_i][a_i];
	}

	for (int a_i = 0, a_j = n-1 ; a_i < n, a_j >= 0; a_i++, a_j--)
	{
		sumOfDiag2 += a[a_i][a_j];
	}

	cout << abs(sumOfDiag1 - sumOfDiag2) << endl;

	system("PAUSE");
	return 0;
}