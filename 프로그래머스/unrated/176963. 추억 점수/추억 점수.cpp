#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> m;
    for (int i = 0; i < name.size(); i++)
        m[name[i]] = yearning[i];
    for (auto iter : photo)
    {
        int temp = 0;
        for(auto iter2: iter)
        {
            if (m.find(iter2) != m.end())
                temp += m[iter2];
        }
        answer.push_back(temp);
    }
    return answer;
}