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

	smallestStick = arr[0];

	while (arr.size() > 1)
	{
		for (int arr_i = 0; arr_i < n; arr_i++)
		{
			if (arr[arr_i] < smallestStick)
			{
				smallestStick = arr[arr_i];
			}
		}

		for (int arr_i = 0; arr_i < arr.size(); arr_i++)
		{
			if (arr[arr_i] >= smallestStick)
			{
				arr[arr_i]-=smallestStick;
			}
		}

		for (int arr_i = 0; arr_i < arr.size(); arr_i++)
		{
			if (arr[arr_i] <= 0)
			{
				arr.erase(arr.begin() + arr_i);
			}
		}

		cout << arr.size() << endl;
	}
	/*
	while (sticksLeft > 1)
	{
		//Calculate smallest stick
		for (int arr_i = 0; arr_i < n - 1; arr_i++)
		{
			if (arr[arr_i + 1] > arr[arr_i])
			{
				smallestStick = arr[arr_i];
			}
			else
			{
				smallestStick = arr[arr_i + 1];
			}
		}

		for (int arr_i = 0; arr_i < n; arr_i++)
		{
			arr[arr_i] -= smallestStick;
			if (arr[arr_i] == 0)
			{
				sticksLeft--;
			}
		}

		//Calculate number of sticks left
		if (sticksLeft > 1)
		{
			for (int arr_i = 0; arr_i < n; arr_i++)
			{
				if (arr[arr_i] <= smallestStick)
				{
					sticksLeft--;
				}
			}
		}
	
		cout << sticksLeft << endl;
	}
	*/

	system("PAUSE");
	return 0;
}
