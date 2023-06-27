#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string polynomial) {
    polynomial += " ";
    string answer = "";
    string temp = "";
    map<string, int> m;
    int count = 0;
    for (int i = 0; i < polynomial.size(); i++)
    {
        if (polynomial[i] == ' ' && !temp.empty())
        {
			count = i;
			if (temp.find('x') == string::npos)
			{
                m["y"] += stoi(temp);
			}
            else
            {
                if (temp.size() == 1)
                    m["x"]++;
                else
                {
                    m["x"] += stoi(temp.substr(0,count-1));
                }
            }
			temp = "";
            continue;
        }
        if (polynomial[i] != ' ' && polynomial[i] != '+')
        {
            temp += polynomial[i];
        }
    }
    for (auto iter : m)
    {
        if (iter.first == "x")
        {
            answer = to_string(iter.second) + "x";
            if (answer == "1x")
                answer = "x";

            if (m.size() >= 2)
            {
                answer += " + ";
            }
        }
        else
        {
            answer += to_string(iter.second);
        }
    }
    return answer;
}

int main()
{
    cout << solution("3x + 7 + x");
}