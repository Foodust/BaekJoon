#include<string>
#include<iostream>
using namespace std;

int solution(string s) {
    int answer = s.size();
    for (int i = 1; i <=s.size() / 2; i++)
    {
        int count = 1;
        string temp = "", temp2 = "";
        temp2 = s.substr(0, i);
        for (int j = i; j < s.size(); j+=i)
        {
            if (temp2 == s.substr(j, i))
            {
                count++;
            }
            else
            {
                if (count > 1)
                {
                    temp += to_string(count);
                }
                temp += temp2;
                temp2 = s.substr(j, i);
                count = 1;
            }
        }
        if (count > 1)
        {
            temp += to_string(count);
        }
        temp += temp2;
        if (answer > temp.size())
        {
            answer = temp.size();
        }
    }
    return answer;
}