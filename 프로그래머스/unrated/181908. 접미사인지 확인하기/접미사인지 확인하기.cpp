#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string, string is_suffix) {
	reverse(is_suffix.begin(), is_suffix.end());
	reverse(my_string.begin(), my_string.end());
	for (int i = 0; i < is_suffix.size(); i++)
		if (is_suffix[i] != my_string[i])
			return 0;
	return 1;
}