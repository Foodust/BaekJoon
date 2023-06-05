#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
	string temp = "";
    for (int i = 0; i < my_str.size(); i++)
    {
        if (i % n == 0 && i != 0)
        {
            answer.push_back(temp);
            temp = "";
        }
        temp += my_str[i];
    }
    answer.push_back(temp);
    return answer;
}