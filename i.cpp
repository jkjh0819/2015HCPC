//correct
#include <iostream>

using namespace std;

int main()
{
	int testC;
	cin >> testC;
	while (testC--)
	{
		int temp;
		cin >> temp;
		if (temp % 3 == 0) cout << temp / 3 << endl;
		else cout << "-1" << endl;
	}
	return 0;
}