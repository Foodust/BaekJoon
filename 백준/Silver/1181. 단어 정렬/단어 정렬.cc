#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool e(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}
int main()
{
	int a=0;
	string b;
	vector<string> c;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		if (find(c.begin(), c.end(), b) == c.end())
			c.push_back(b);
			
	}
	sort(c.begin(), c.end(),e);
	

	for (int i = 0; i < c.size(); i++)
	{
		cout << c[i] << "\n";
	}
}
