#include<iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    int ok = 0;
    for (int i = 0 ; i < dic.size() ; i++)
    {
        for (int j = 0; j < spell.size(); j++)
        {
            if (dic[i].find(spell[j]) != string::npos)
            {
                ok++;
            }
        }
        if (ok >= spell.size() && dic[i].size() == spell.size())
        {
            answer = 1;
        }
        ok = 0;
    }
    return answer;
}