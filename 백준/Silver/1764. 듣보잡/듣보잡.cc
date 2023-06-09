#include<iostream>
#include <vector>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a, b ,e = 0;
	cin >> a >> b;

	map<string, int>c;
	vector<string>d;

	for (int i = 1; i <= a; i++)
	{
		string temp;
		cin >> temp;
		c.insert(make_pair(temp, i));
	}
	for (int i = 0; i < b; i++)
	{
		string temp;
		cin >> temp;
		if (c[temp])
		{
			d.push_back(temp);
			e++;
		}
	}
	sort(d.begin(), d.end());
	cout << e << "\n";

	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << "\n";
	}

}