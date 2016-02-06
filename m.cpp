//correct
#include <iostream>
#include <set>
using namespace std;

int main()
{
	int testC;
	cin >> testC;
	while (testC--)
	{
		int dam;
		cin >> dam;
		multiset<int> hp;
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		hp.insert(a); hp.insert(b);
		hp.insert(c); hp.insert(d);
		hp.insert(e);
		int count=0;
		multiset<int>::iterator it = hp.begin();
		while (it != hp.end())
		{
			if (*it <= dam)
				count++;
			it++;
		}
		if (count >= 3)	cout << "CARRY" << endl;
		else cout << "DODGE" << endl;

	}

	return 0;
}