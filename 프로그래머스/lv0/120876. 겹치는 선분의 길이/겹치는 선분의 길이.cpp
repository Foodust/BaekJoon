#include <string>
#include <map>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    map<int, int> m;
    for (const auto& a : lines)
    {
        for (int i = a[0]; i < a[1]; i++)
            m[i]++;
    }
    for (const auto& a : m)
    {
        if (a.second > 1)
            answer++;
    }
    return answer;
}