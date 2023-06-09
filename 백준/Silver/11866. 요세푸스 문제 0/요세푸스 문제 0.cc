#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int a, b;
	queue<int> c;
	cin >> a >> b;
	for (int i = 1; a >= i; i++)
	{
		c.push(i);
	}
	cout << "<";
	while (!c.empty())
	{
		for (int i = 0; i < b - 1; i++)
		{
			c.push(c.front());
			c.pop();
		}
		cout << c.front();
		c.pop();

		if (!c.empty())
			cout << ", ";
	}
	cout << ">" << "\n";
}