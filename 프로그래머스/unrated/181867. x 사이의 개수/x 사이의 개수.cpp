#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    string temp ="";
    for (auto a : myString)
    {
        if (a == 'x')
        {
            answer.push_back(temp.size());
            temp = "";
        }
        else
            temp += "o";
    }
    answer.push_back(temp.size());
    return answer;
}