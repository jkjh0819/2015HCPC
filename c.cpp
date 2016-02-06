//not answer
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int testC;
	cin >> testC;
	while (testC--)
	{
		int width, mind, area=0;
		cin >> width >> mind;
		vector<int> col;
		for (int i = 0; i < width; i++)
		{
			int temp;
			cin >> temp;
			col.push_back(temp);
		}
		int before_col = col[0];
		vector<int>::iterator it = col.begin();
		it++;
		while (it != col.end())
		{
			if (*it<*(it + 1))
				break;
		}

		while (it != col.end())
		{
			if (before_col > *it&&(it+1)!=col.end())
			{
				
					area += before_col - *it;
					it++;
			}
			else
			{
				
					before_col = *it;
					it++;

			}
		}
		if (area == 0) cout << "FAIL" << endl;
		else if (area <= mind)cout << "SWIM" << endl;
		else cout << "DUMPED" << endl;
			
	}
	return 0;
}