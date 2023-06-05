#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string temp="";
    for (auto a : my_string)
    {
        if (a == ' ')
        {
            answer.push_back(temp); temp = "";
        }
        else
            temp += a;
    }
    answer.push_back(temp);
    return answer;
}