#include <iostream>
#include <string>

using namespace std;

int main()
{
	string time;
	cin >> time;

	if (time.substr(8, 2) == "AM")
	{
		if (time.substr(0, 2) == "12")
		{
			time.replace(0, 2, "00");
		}
	}
	else
	{
		int hours = stoi(time.substr(0, 2));

		if (hours!=12)
		{
			hours += 12;
			time.replace(0, 2, to_string(hours));
		}	
	}

	cout << time.substr(0, 8) << endl;

	system("PAUSE");
	return 0;
}