#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string temp;
    for (auto a : myStr)
    {
        if ((a == 'a' || a == 'b' || a == 'c') )
        {
            if (!temp.empty())
            {
                answer.push_back(temp);
                temp = "";
            }
        }
        else
        {
            temp += a;
        }
    }
    if (!temp.empty())
    {
        answer.push_back(temp);
        temp = "";
    }

    return answer.empty() ? vector<string>{"EMPTY"} : answer;
}