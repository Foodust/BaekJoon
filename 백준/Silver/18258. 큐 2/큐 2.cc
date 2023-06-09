#include<iostream>
#include <queue>
using namespace std;

queue<int> q;

void func(string str)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	if (str == "push")
	{
		int a;
		cin >> a;
		q.push(a);
	}
	else if (str == "pop")
	{
		if (q.empty())
		{
			cout << "-1" << "\n";
		}
		else
		{
			cout << q.front() << "\n";
			q.pop();
		}
	}
	else if (str == "front")
	{
		if (q.empty())
		{
			cout << "-1" << "\n";
		}
		else
		{
			cout << q.front() << "\n";
		}
	}
	else if (str == "back")
	{
		if (q.empty())
		{
			cout << "-1" << "\n";
		}
		else
		{
			cout << q.back() << "\n";
		}
	}
	else if (str == "size")
	{
		cout << q.size() << "\n";
	}
	else if (str == "empty")
	{
		if (q.empty())
			cout << "1\n";
		else
			cout << "0\n";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a = 0, b = 0;
	string str;
	
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> str;
		func(str);
	}
}