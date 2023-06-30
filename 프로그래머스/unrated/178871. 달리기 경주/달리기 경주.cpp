#include <string>
#include <vector>
#include <map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string, int> mp;
    map<int, string> cp;
    for (int i = 0; i < players.size(); i++)
    {
        mp[players[i]] = i + 1;
        cp[i + 1] = players[i];
    }
    for (auto iter : callings)
    {
        int ct  = mp[iter];
        string st1 = cp[ct];
        string st2 = cp[ct - 1];

        swap(cp[ct], cp[ct - 1]);
        swap(mp[st1], mp[st2]);
    }
    for (auto iter : cp)
        answer.push_back(iter.second);

    return answer;
}