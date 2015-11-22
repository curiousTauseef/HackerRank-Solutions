#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
	int n;
	float positiveCount = 0;
	float negativeCount = 0;
	float zeroCount = 0;

	cin >> n;
	vector<int> arr(n);

	for (int arr_i = 0; arr_i < n; arr_i++)
	{
		cin >> arr[arr_i];

		if(arr[arr_i]>0)
		{
			positiveCount++;
		}
		else if (arr[arr_i]<0)
		{
			negativeCount++;
		}
		else
		{
			zeroCount++;
		}
	}

	cout << setprecision(3) << fixed << positiveCount / n << endl;
	cout << setprecision(3) << fixed << negativeCount / n << endl;
	cout << setprecision(3) << fixed << zeroCount / n << endl;

	system("PAUSE");
	return 0;
}