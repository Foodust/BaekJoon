#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
	string answer;
	int i = 0;
	for(; i < n_str.size();i++)
	{
		if (n_str[i] != '0')
			break;
	}
	return n_str.substr(i, n_str.size());
}
