#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string, string> user;
    vector<pair<string,int>> asd;
    for (auto a : record)
    {
        stringstream stream;
        string doing, id, name;
        stream.str(a);
        stream >> doing >> id >> name;
        if (doing == "Enter")
        {
            user[id] = name;
            asd.push_back({ id,1 });
        }
        else if (doing == "Leave")
            asd.push_back({ id,0 });
        else if (doing == "Change")
            user[id] = name;
    }
    for (auto a : asd)
    {
        if (a.second == 0)
            answer.push_back(user[a.first] + "님이 나갔습니다.");
        else
            answer.push_back(user[a.first] + "님이 들어왔습니다.");
    }

    return answer;
}