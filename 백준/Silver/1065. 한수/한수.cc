#include<iostream>

using namespace std;

bool c(int a)
{
	if (a < 100)
		return true;
	int b, c, d;
	b = a / 100;
	c = a % 10;
	d = a % 100 / 10;
	if (b - d == d - c)
		return true;
	return false;
}

int main()
{
	int a,b=0;
	cin >> a;
	for (int i = 1; i <=a; i++)
	{
		if (c(i))
			b++;
	}
	cout << b;
}
