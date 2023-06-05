#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;


vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> v, cpy;
    map<int, int> mp;
    int cnt = 1;

    for (int i = 0; i < score.size(); i++) 
    {
        v.push_back(score[i][0] + score[i][1]);
        cpy.push_back(score[i][0] + score[i][1]);
    }

    sort(cpy.begin(), cpy.end(), greater<>());
    
    for (int i = 0; i < cpy.size(); i++) 
    {
        if (mp.find(cpy[i]) == mp.end()) 
            mp[cpy[i]] = cnt;
        cnt++;
    }

    for (int i = 0; i < v.size(); i++)
        answer.push_back(mp[v[i]]);

    return answer;
}