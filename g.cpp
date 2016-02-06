//correct
#include <iostream>
#include <string>


using namespace std;

int main()
{
	int testC;
	cin >> testC;
	while (testC--)
	{
		string name;
		cin >> name;
		int sum=0;
		for (int i = 0; i < name.size(); i++)
		{
			sum += name[i] - 'a';
		}
		cout << sum << endl;
	}
	return 0;
}