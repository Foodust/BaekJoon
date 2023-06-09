#include<iostream>
#include<queue>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a = 0, b = 0;
	queue<int> q;
	cin >> a >> b;
	for (int i = 1; i <= a; i++)
		q.push(i);
	cout << "<";
	while (!q.empty())
	{
		if (q.size() == 1)
		{
			cout << q.front();
			q.pop();
			break;
		}
		for (int i = 1; i < b; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ", ";
		q.pop();
	}
	cout << ">";
}