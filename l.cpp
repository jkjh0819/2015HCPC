//correct
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int testC;
	cin >> testC;
	while (testC--)
	{
		int window, alt;
		cin >> window >> alt;
		vector<int> tab;
		for (int i = 0; i < alt; i++)
		{
			int temp;
			cin >> temp;
			tab.push_back(temp);
		}
		int current = 0;
		for (vector<int>::iterator it = tab.begin(); it != tab.end(); it++)
		{
			if (*it>current) current++;
			else if (*it == current) current = 0;
			else continue;
		}
		cout << current << endl;
	}
	return 0;
}