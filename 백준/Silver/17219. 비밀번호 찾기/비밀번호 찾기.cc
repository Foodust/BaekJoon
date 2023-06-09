#include<iostream>
#include <vector>
#include<algorithm>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	map<string, string> a;
	int b,d;
	cin >> b >> d;
	for (int i = 0; i < b; i++)
	{
		string c, e;
		cin >> c >> e;
		a.insert(make_pair(c, e));
	}

	for (int i = 0; i < d; i++)
	{
		string f;
		cin >> f;
		cout << a[f] << "\n";
	}
}