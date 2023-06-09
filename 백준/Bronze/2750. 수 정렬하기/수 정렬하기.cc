#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int a = 0;
	vector<int> v;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int b = 0;
		cin >> b;
		v.push_back(b);
	}
	sort(v.begin(), v.end());
	for (auto c : v)
		cout << c << "\n";
}
