#include <iostream>
using namespace std;

void Clock(int a, int b)
{
	int k;
	if (b >= 60)
	{
		k = b / 60;
		b = b % 60;
		a += k;

	}

	if (a >= 24)
	{
		a %= 24;
	}

	cout << a <<" " << b << endl;
}

int main()
{
	int a, b;
	cin >> a >> b;
	int c = 0;
	cin >> c;
	Clock(a, b + c);

	return 0;
}