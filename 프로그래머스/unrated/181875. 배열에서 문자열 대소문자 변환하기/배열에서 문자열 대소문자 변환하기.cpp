#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for (int i = 1; i <= strArr.size(); i++)
    {
        string temp ="";
        if (i % 2 == 0)
        {
			for (const auto& a : strArr[i - 1])
				temp += toupper(a);
        }
        else
        {
            for (const auto& a : strArr[i - 1])
            {
                temp += tolower(a);
            }
        }
        answer.push_back(temp);
    }
    return answer;
}