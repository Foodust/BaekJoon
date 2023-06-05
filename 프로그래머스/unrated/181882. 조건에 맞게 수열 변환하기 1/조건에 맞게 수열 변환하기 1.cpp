#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for (const auto& a : arr)
    {
        if (a >= 50 && a % 2 == 0)
            answer.push_back(a / 2);
        else if (a < 50 && a % 2 == 1)
            answer.push_back(a * 2);
        else
            answer.push_back(a);
    }
    return answer;
}