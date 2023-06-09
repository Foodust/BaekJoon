#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool e(const pair<int, int>& a,const pair<int, int>& b)
{
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
}

int main()
{
	int a, b, d;
	vector<pair<int, int>>c;
	cin >> a; 
	for (int i = 0; i < a; i++)
	{
		cin >> b >> d;
		c.push_back(make_pair(b, d));
	}
	stable_sort(c.begin(), c.end(),e);
	for (int i = 0; i < a; i++)
	{
		cout << c[i].first << " " << c[i].second << "\n";
	}
}