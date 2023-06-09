#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int a,c=0,e;
	stack<int> b;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> e;
		if (e == 0)
		{
			if (!b.empty())
			{
				c -= b.top();
				b.pop();
			}
		}
		else
		{
			b.push(e);
			if(!b.empty())
				c += b.top();
		}
	}
	cout << c;
}