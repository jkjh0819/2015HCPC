//not submit
#include <iostream>

using namespace std;

int main()
{
	int testC;
	cin >> testC;
	while (testC--)
	{
		int a, b, c, d, e, f,sum=0;
		cin >> a >> b >> c >> d >> e >> f;
		sum = a*a + b*b - (a - b)*(a - b) + c*c + d*d - (c - d)*(c - d) + e*e + f*f;
		cout << sum << endl;
		
	}

	return 0;
}