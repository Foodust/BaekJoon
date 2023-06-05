#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
	if (arr1.size() < arr2.size())
		return -1;
	else if (arr1.size() == arr2.size())
	{
		int o = 0, t = 0;
		for (int i = 0; i < arr1.size(); i++)
		{
			o += arr1[i];
			t += arr2[i];
		}
		if (o == t)
			return 0;
		if (o > t)
			return 1;
		else
			return -1;
	}
	else
		return 1;
}