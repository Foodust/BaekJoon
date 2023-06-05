#include<bits/stdc++.h>

using namespace std;
vector<int> solution(vector<string> id_list, vector<string> report, int k)
{
	map<string, vector<string>>user;
	map<string, vector<string>>rp;
	for (int i = 0; i < report.size(); i++)
	{
		int cr;
		cr = report[i].find(" ");
		string crm =  report[i].substr(0,cr);
		string pvm =  report[i].substr(cr,report[i].size());
		//cout << "crm : "<< crm << " " << "pvm : " << pvm << endl;

		if (user[pvm].empty() || (find(user[pvm].begin(), user[pvm].end(), crm) == user[pvm].end()))
		{
			user[pvm].push_back(crm);
		}

		if (rp[crm].empty() || (find(rp[crm].begin(), rp[crm].end(), pvm) == rp[crm].end()))
		{
			rp[crm].push_back(pvm);
		}
	}
	vector<int> answer;
	//cout << endl;
	for(auto iter : id_list)
	{
		int count = 0;
		auto list = rp[iter];
		for(auto ls : list)
		{
			if (user[ls].size() >= k)
			{
				count++;
			}
		}
		answer.push_back(count);
	}
	//for (auto iter : user)
	//{
	//	for (int i = 0; i < iter.second.size(); i++)
	//	{
	//		cout << i<<" id : "<< iter.first << " 신고 : "<< iter.second[i] << endl;
	//	}
	//}
	//cout << endl;
	//for (auto iter : rp)
	//{
	//	for (int i = 0; i < iter.second.size(); i++)
	//	{
	//		cout << i << " id : " << iter.first << " 받음 : " << iter.second[i] << endl;
	//	}
	//}
	return answer;
}