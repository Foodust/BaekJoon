#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for (const auto& a : arr)
    {
        for (int i = 0; i < a; i++)
            answer.push_back(a);
    }
    return answer;
}