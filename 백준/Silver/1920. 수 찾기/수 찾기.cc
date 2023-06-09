#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> arr;
vector<int> brr;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int a, b,c;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		arr.push_back(b);
	}
	sort(arr.begin(), arr.end());
	cin >> b;
	for (int i = 0; i < b; i++)
	{
		cin >> c;
		brr.push_back(c);
	}
	for (int i = 0; i < b; i++)
	{
		if (binary_search(arr.begin(), arr.end(), brr[i]))
		{
			cout << "1\n";
		}
		else
			cout << "0\n";
	}

}