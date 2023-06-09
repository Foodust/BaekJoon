#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
	int a;
	cin >> a;
	queue<int> b;
	for (int i = 1; i  <=a; i++)
	{
		b.push(i);
	}
	while (1)
	{
		if (b.size() == 1)
		{
			break;
		}
		b.pop();
		int temp = b.front();
		b.pop();
		b.push(temp);
	}
	cout << b.front();
	return 0;
}
