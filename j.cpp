//not answer
#include <iostream>
#include <set>
using namespace std;

int main()
{
	int testC;
	cin >> testC;
	while (testC--)
	{
		int n, m, da = 0;
		cin >> n >> m;
		multiset<int> hp;
		multiset<int> remain;
		for (int i = 0; i < n*m; i++)
		{
			int temp;
			cin >> temp;
			hp.insert(temp);
		}
		while(hp.size()!=0){int count_max = 0;
		for (multiset<int>::iterator it = hp.begin(); it != hp.end();)
		{
			int t = *it, count = 0;
			while (*it == t)
			{
				count++;
				it++;
				if (it == hp.end())
					break;
			}
			if (count_max <= count)
				count_max = t; //남아있는 것 중에 가장 많이 반복되는 수
		}
		multiset<int>::reverse_iterator it = hp.rbegin(); //남아있는것 중에 가장 큰수
		int max = *it;
		int max_num = 0;
		while (it != hp.rend())
		{
			if (max == *it)
				max_num++;
			it++;
		}

		if (count_max >=max){
			for (multiset<int>::iterator it = hp.begin(); it != hp.end(); it++)
			{
				int temp = *it;
				temp -= count_max;
				if (temp > 0)
					remain.insert(temp);
			}
			hp.clear();
			hp = remain;
			da += count_max;
		}
		else
		{
			hp.erase(max);
			da+=max_num;
		}
	}
		cout << da << endl;
	}
	return 0;
}