#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency);
    vector<int> a;
    sort(emergency.begin(), emergency.end(),greater<int>());
    for (int i = 0; i < emergency.size(); i++)
    {
        auto iter = find(emergency.begin(), emergency.end(), answer[i]) - emergency.begin();
        a.push_back(iter + 1);
    }
    return a;
}