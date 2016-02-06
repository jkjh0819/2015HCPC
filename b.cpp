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
		int a, b, c;
		cin >> a >> b >> c;
		set<int> height;
		height.insert(a);
		height.insert(b);
		height.insert(c);
		set<int>::iterator it = height.begin();
		it++;
		cout << *it << endl;
	}
	return 0;
}