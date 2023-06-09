#include <iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
	deque<int> c;
	int a;	cin >> a;
	for (int i = 0; i < a; i++)
	{
		string b;
		cin >> b;
		if (b == "push_front")
		{
			int d;
			cin >> d;
			c.push_front(d);
		}
		else if (b == "push_back")
		{
			int d;
			cin >> d;
			c.push_back(d);
		}
		else if (b == "pop_front")
		{
			if (c.empty())
				cout << "-1" << "\n";
			else
			{
				cout << c.front() << "\n";
				c.pop_front();
			}
		}
		else if (b == "pop_back")
		{
			if (c.empty())
				cout << "-1" << "\n";
			else
			{
				cout << c.back() << "\n";
				c.pop_back();
			}
		}
		else if (b == "size")
		{
			cout << c.size() << "\n";
		}
		else if (b == "front")
		{
			if (c.empty())
				cout << "-1" << "\n";
			else
			{
				cout << c.front() << "\n";
			}
		}
		else if (b == "back")
		{
			if (c.empty())
				cout << "-1" << "\n";
			else
			{
				cout << c.back() << "\n";
			}
		}
		else if (b == "empty")
		{
			if (c.empty())
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}

	}

	
}