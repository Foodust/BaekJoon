#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int as(int n)
{
	int temp = n;
	while (n > 0)
	{
		temp = temp + n % 10;
		n = n / 10;
	}
	return temp;
}
int main()
{
	map<int, int> m;
	for (int i = 0; i <= 10000; i++)
	{
		m[i] = 0;
	}
	for (int i = 0; i <= 10000; i++)
	{
		int temp = as(i);
		m[temp]++;
	}
	for (auto a : m)
	{
		if(a.second ==0)
			cout << a.first << "\n";
	}
}
