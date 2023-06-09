#include<iostream>
#include <vector>
#include<algorithm>
#include <map>
#include<queue>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > b;
	int a, c;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> c;
		
		switch (c)
		{
		case 0:
			if (b.empty())
				cout << "0\n";
			else
			{
				cout << b.top().second << "\n";
				b.pop();
			}
			break;
		default:
			b.push({abs(c),c});
			break;
		}
	}
}