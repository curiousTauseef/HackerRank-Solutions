#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	int smallestStick;
	cin >> n;
	vector<int> arr(n);

	for (int arr_i = 0; arr_i < n; arr_i++)
	{
		cin >> arr[arr_i];
	}

	int sticksLeft = n;

	cout << sticksLeft << endl;

	while (sticksLeft > 1)
	{
		sticksLeft = 0;

		//Take the first non zero element as smallest
		for (int arr_i = 0; arr_i < n; arr_i++)
		{
			if (arr[arr_i]>0)
			{
				smallestStick = arr[arr_i];
				break;
			}
		}

		//Calculate the smallest
		for (int arr_i = 0; arr_i < n; arr_i++)
		{
			if (arr[arr_i] < smallestStick && arr[arr_i]>0)
			{
				smallestStick = arr[arr_i];
			}
		}

		//Count the sticks left
		for (int arr_i = 0; arr_i < n; arr_i++)
		{
			arr[arr_i] -= smallestStick;

			if (arr[arr_i] > 0)
			{
				sticksLeft++;
			}
		}

		if(sticksLeft > 0)
			cout << sticksLeft << endl;
	}

	system("PAUSE");
	return 0;
}
