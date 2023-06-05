#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for (auto a : strArr)
    {
        if (a.find("ad") == string::npos)
            answer.push_back(a);
    }
    return answer;
}