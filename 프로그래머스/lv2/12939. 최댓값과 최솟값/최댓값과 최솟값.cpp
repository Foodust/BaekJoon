#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
string solution(string s) {
    string answer = "";
    vector<int> v;
    string sub = "";
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == ' ')
        {
            v.push_back(stoi(sub));
            sub ="";
        }
        else
            sub += s[i];
    }
    v.push_back(stoi(sub));
    sort(v.begin(), v.end());
    answer+= to_string(v[0]);
    answer+= ' ';
    answer+= to_string(v.back());
    return answer;
}