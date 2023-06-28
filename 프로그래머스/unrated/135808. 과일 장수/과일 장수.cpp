#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    if (score.size() / m == 0)
        return 0;
    sort(score.begin(), score.end(),greater<int>());
    for (int i = 0; i < score.size(); i++)
    {
        vector<int> temp;
        for (int j = i; j <=m+i; j++)
            temp.push_back(score[j]);
        if (temp.size() >= m-1)
            answer += temp[m-1] * m;
        i += m-1;
    }
    return answer;
}