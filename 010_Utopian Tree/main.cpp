#include <iostream>

using namespace std;

int HeightOfTree(int);

int main()
{
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++)
	{
		int n;
		cin >> n;
		cout << HeightOfTree(n) << endl;
	}
	system("PAUSE");
	return 0;
}

int HeightOfTree(int i_n)
{
	int height = 1;

	while(i_n > 0)
	{
		height *= 2;
		i_n--;
		if (i_n > 0)
		{
			height += 1;
			i_n--;
		}
	}

	return height;
}