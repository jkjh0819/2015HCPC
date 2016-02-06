//not answer
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int testC;
	cin >> testC;
	while (testC--)
	{
		string number;
		cin >> number;
		vector<char> numbers;
		for (int i = 0; i < number.size(); i++)
		{
			numbers.push_back(number[i]);
		}
		vector<char>::iterator it = numbers.end();
		it--;
		char count_max='0';
			char max = *it;
			it = numbers.begin();
			while (it != numbers.end())
			{
				char temp = '0';
				for (char i = *it; *it == i;)
				{
					temp++;
					it++;
					if (it == numbers.end())
						break;
				}
				if (temp>count_max)
					count_max = temp;
			}
			if (max > count_max)
				cout << max << endl;
			else
				cout << count_max << endl;



		
	}
	return 0;
}