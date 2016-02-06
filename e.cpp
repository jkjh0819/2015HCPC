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
		int size;
		cin >> size;
		int pos;
		vector<int> map;
		for (int i = 0; i < size*size; i++)
		{
			int temp;
			cin >> temp;
			if (temp == 0)
			{
				pos = i + 1;
			}
			map.push_back(temp);
		}
		int x = pos / size+1;
		int y = pos%size;
		if (y == 0){
			x--;
			y = size;
		}
		cout << x << ' ' << y << endl;
	}
	return 0;
}