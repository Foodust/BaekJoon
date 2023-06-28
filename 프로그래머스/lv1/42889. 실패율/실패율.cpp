#include<iostream>
#include <string>
#include <vector>
#include <map>
#include<algorithm>
using namespace std;
bool compare(const pair<int, double>& a, const pair<int, double>& b) {
	if (a.second > b.second)
		return true;
	else if (a.second < b.second)
		return false;
	else
		return a.first < b.first;
}

vector<int> solution(int N, vector<int> stages) {
	vector<int> answer;
	map<int, double> user;
	map<int, double> acc;
	map<int, double> result;
	for (auto iter : stages)
	{
		user[iter]++;
		for (int i = 1; i <= iter; i++)
		{
			acc[i]++;
		}
	}
	for (int i = 1; i <= N; i++)
	{
		result[i] = user[i] / acc[i];
	}
	vector<pair<int, double>> asd(result.begin(), result.end());
	sort(asd.begin(), asd.end(), compare);
	for (auto iter : asd)
		answer.push_back(iter.first);
	return answer;
}