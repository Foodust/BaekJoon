#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
	int a,d;
	string b;
	queue<int>c;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		if (b == "push")
		{
			cin >> d;
			c.push(d);
		}
		else if (b == "pop")
		{
			if ((c.empty()))
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << c.front() << "\n";
				c.pop();
			}
		}
		else if (b == "size")
		{
			cout << c.size() << "\n";
		}
		else if (b == "empty")
		{
			if (c.empty())
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}
		else if (b == "front")
		{
			if (c.empty())
				cout << "-1" << "\n";
			else
				cout << c.front()<<"\n";
		}
		else if (b == "back")
		{
			if (c.empty())
				cout << "-1" << "\n";
			else
				cout << c.back() << "\n";
		}
	}

	
}
