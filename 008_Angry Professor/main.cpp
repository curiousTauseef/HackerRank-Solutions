#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int t;
	int numOfStudentsOnTime = 0;

	cin >> t;
	for (int a0 = 0; a0 < t; a0++)
	{
		int n;
		int k;

		numOfStudentsOnTime = 0;
		cin >> n >> k;
		vector<int> a(n);
		for (int a_i = 0; a_i < n; a_i++)
		{
			cin >> a[a_i];
			if (a[a_i] <= 0)
			{
				numOfStudentsOnTime++;
			}
		}

		if (numOfStudentsOnTime >= k)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}

	}
	system("PAUSE");
	return 0;
}