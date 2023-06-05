#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    for (const auto& a : my_string)
    {
        if (a == alp[0])
            answer += toupper(a);
        else
            answer += a;
    }
    return answer;
}