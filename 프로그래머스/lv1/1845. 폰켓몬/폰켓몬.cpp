#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> nums)
{
	map<int, int>a;
	for(int i  = 0 ; i < nums.size(); i++)
	{
		a.insert(make_pair(nums[i], i));
	}
	return min(nums.size() / 2, a.size());
}