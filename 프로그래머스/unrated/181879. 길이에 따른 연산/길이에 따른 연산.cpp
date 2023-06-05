#include <string>
#include <vector>
#include <numeric>
using namespace std;

int solution(vector<int> num_list) {
	int answer = 1;
	if (num_list.size() >= 11)
		answer = accumulate(num_list.begin(), num_list.end(), 0);
	else
	{
		for (const auto& a : num_list)
			answer *= a;
	}
	return answer;
}