#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> asd;
    for (int i = 0; i < score.size(); i++)
    {
        asd.push_back(score[i]);
        sort(asd.begin(), asd.end(), greater<int>());
        if (i < k)
            answer.push_back(asd[asd.size() - 1]);
        else
            answer.push_back(asd[k-1]);
    }
    return answer;
}