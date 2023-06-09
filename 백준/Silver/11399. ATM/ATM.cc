#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> a;
	int b, c , d = 0;

	cin >> b;
	for (int i = 0; i < b; i++)
	{
		cin >> c;
		a.push_back(c);
	}
	sort(a.begin(), a.end());

	for (int i = 0; i <= a.size(); i++)
	{
		for (int j = 0; j < i; j++)
		{
			d += a[j];
		}
	}
	cout << d;
}