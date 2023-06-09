#include<iostream>

using namespace std;

unsigned long long b[50] = {0,1,};

unsigned long long c(int e)
{
	if (e == 0 || e == 1)
	{
		return b[e];
	}
	else if (b[e] == 0)
	{
		b[e] = c(e - 1) + c(e - 2);
	}

	return b[e];
}


int main()
{

	int b;
	cin >> b;
	for(int i = 0 ; i<b;i++)
	{
		int a;
		cin >> a;
		if (a == 0)
		{
			cout << "1 0" << endl;
		}
		else
		{
			cout << c(a-1) << " " << c(a) << endl;
		}
	}
	
}