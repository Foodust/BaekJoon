#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    for (const auto& a : str_list)
        if (a.find(ex) == string::npos)
            answer += a;
    return answer;
}