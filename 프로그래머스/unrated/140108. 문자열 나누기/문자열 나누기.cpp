#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(string s) {
    int answer = 0;

    int a = 0, b = 0,i=0;
    char c = s[0];
    for (; i < s.size(); i++)
    {
        if (c == s[i])
            a++;
        else
            b++;
        if (a == b)
        {
            answer++;
            c = s[i+1];
            a = 0, b = 0;
        }
    }
    if (a || b)
        answer++;

    return answer;
}