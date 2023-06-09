#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	int a;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		int b , d, f = 0;
		cin >> b >> d;
		queue<pair<int, int>> q;
		priority_queue<int>e;
		for (int j = 0; j < b; j++)
		{
			int c; 
			cin >> c;
			q.push(make_pair(j,c));
			e.push(c);
		}

		while (!q.empty())
		{
			int w = q.front().first;
			int s = q.front().second;
			q.pop();
			if (e.top() == s)
			{
				e.pop();
				++f;
				if (w == d)
				{
					cout << f << endl;
					break;
				}
			}
			else
			{
				q.push(make_pair(w, s));
			}
		}

	}
}

