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
		int div[3] = { 2, 3, 13 };
		vector<vector<int> > co;
		int count, count_aji=0;
		cin >> count;
		for (int i = 0; i < count; i++)
		{
			int temp;
			cin >> temp;
			vector<int> aji;
			int temp_co = 0;
			for (int i = 0; i < 3; )
			{
				if (temp%div[i] == 0)
				{
					temp_co++;
					temp = temp / div[i];
				}
				else
				{
					aji.push_back(temp_co);
					temp_co = 0;
					i++;
				}
			}
			if (temp == 1) co.push_back(aji);
		}
		for (int i = 0; i < co.size(); i++)
		{
			for (int j = i + 1; j < co.size(); j++)
			{
				int a, b, c;
				a = co[i][0] + co[j][0];
				b = co[i][1] + co[j][1];
				c = co[i][2] + co[j][2];
				if (a == 0 || a == 2 || a == 3 || a == 13)
				{
					if (b == 0 || b == 2 || b == 3 || b == 13)
					{
						if (c == 0 || c == 2 || c == 3 || c == 13)
							count_aji++;
						else continue;
					}
					else continue;
				}
				else continue;
			}

		}
		cout << count_aji << endl;

	}
	return 0;
}