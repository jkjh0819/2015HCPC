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
		vector<int> team;
		int team_co;
		cin >> team_co;
		for (int i = 0; i < team_co; i++)
		{
			int temp;
			cin >> temp;
			team.push_back(temp);
		}
		for (int i = 1; i <= team_co; i++)
		{
			cout << i << ' ' << team[i - 1] << endl;
		}
	}
	return 0;
}