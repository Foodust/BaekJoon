#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;
vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
	vector<int> answer;
	vector<string> vtoday;
	map<string, int> mterms;
	vector<pair<string,string>> mprivate;
	vector<string> vprivate;

	stringstream ss(today);
	string buf;
	while (getline(ss, buf, '.'))
		vtoday.push_back(buf);
	for (auto iter : terms)
	{
		stringstream st(iter);
		int it =0;
		st >> buf >> it;
		mterms[buf] = it;
	}
	int count = 0;
	for (auto &iter : privacies)
	{
		count++;
		stringstream st(iter);
		buf = iter[iter.size()-1];
		iter.erase(iter.end() - 2, iter.end());
		mprivate.push_back(make_pair(iter,buf));
	}
	count = 0;
	for(int i = 0  ;i < mprivate.size(); i++)
	{
		count++;
		int ipy = stoi(mprivate[i].first.substr(0, 4));
		int ipm = (stoi(mprivate[i].first.substr(5, 6)) + mterms[mprivate[i].second]);
		int ipd = stoi(mprivate[i].first.substr(8, 9));
		while (ipd > 28)
		{
			ipm += 1;
			ipd -= 28;
		}
		while (ipm > 12)
		{
			ipy += 1;
			ipm -= 12;
		}
		ipy *= 336;
		ipm *= 28;

		int tdy = stoi(vtoday[0]) * 336;
		int tdm = stoi(vtoday[1]) * 28;
		int tpd = stoi(vtoday[2]);

		if ((ipy + ipm + ipd) <= (tdy + tdm + tpd))
			answer.push_back(i+1);
		
	}
	return answer;
}