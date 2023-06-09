#include<iostream>
using namespace std;

int main()
{
	int a, b=0, c = 0;
	cin >> a;
	while (a != b)
	{
		++c;
		int temp = c;
		while (temp != 0)
		{
			if (temp % 1000 == 666)
			{
				++b;
				break;
			}
			else
				temp /= 10;
		}
	}
	cout << c;
}
