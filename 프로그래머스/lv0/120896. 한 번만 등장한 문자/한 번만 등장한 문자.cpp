#include <string>
#include <vector>

using namespace std;
vector<int> al(27, 0);
string solution(string s) {
    string answer = "";
    for (auto a : s)
    {
        al[(int)a - 97]++;
    }
    for (int i = 0; i < al.size(); i++)
    {
        if (al[i] == 1)
            answer += i + 97;
    }
    return answer;
}