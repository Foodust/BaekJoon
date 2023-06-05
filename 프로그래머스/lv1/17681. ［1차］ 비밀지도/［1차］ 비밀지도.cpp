#include<bits/stdc++.h>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer;
	for (int i = 0; i < n; i++)
	{
		arr1[i] = arr1[i] | arr2[i];
		string b;
		while (b.size() != n)
		{
			if (arr1[i] % 2 == 1)
				b += '#';
			else
				b += ' ';
			arr1[i] /= 2;
		}
		reverse(b.begin(), b.end());
		answer.push_back(b);
	}
	
	return answer;
}