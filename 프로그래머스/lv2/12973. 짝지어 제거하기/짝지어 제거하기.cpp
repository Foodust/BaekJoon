#include <iostream>
#include<string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = -1;
    stack<char> ss;
    for (auto a : s)
    {
        if (!ss.empty()  && ss.top() == a)
        {
            ss.pop();
        }
        else
            ss.push(a);
    }

    return ss.empty();
}