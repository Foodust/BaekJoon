#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<char, int> m;
    for (auto i = 0; i < survey.size(); ++i) 
    {
        string s = survey[i];
        if (choices[i] == 4)
            continue;
        m[s[(choices[i] < 4 ? 0 : 1)]] += abs(choices[i] - 4);
    }
    if (m['R'] >= m['T'])       
        answer += 'R';
    else                            
        answer += 'T';
    if (m['C'] >= m['F'])       
        answer += 'C';
    else
        answer += 'F';
    if (m['J'] >= m['M'])       
        answer += 'J';
    else                            
        answer += 'M';
    if (m['A'] >= m['N'])       
        answer += 'A';
    else                            
        answer += 'N';
    return answer;
}