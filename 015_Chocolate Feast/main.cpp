#include <iostream>

using namespace std;

int ChocolatesEaten(int, int, int);

int main()
{
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++)
	{
		int n;
		int c;
		int m;
		cin >> n >> c >> m;
		cout << ChocolatesEaten(n,c,m) << endl;
	}
	system("PAUSE");
	return 0;
}

int ChocolatesEaten(int i_n, int i_c, int i_m)
{
	int chocolatesEaten = i_n / i_c;

	int wrappers = chocolatesEaten;

	while (wrappers >= i_m)
	{
		wrappers -= i_m;
		chocolatesEaten++;
		wrappers++;
	}

	return chocolatesEaten;
}