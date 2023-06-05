#include<string>
#include <iostream>
#include <queue>
using namespace std;

bool solution(string s)
{
    queue<char> i;
    for (auto b : s)
    {
        if (b == '(')
        {
            i.push(b);
        }
        else if (b == ')')
        {
            if (i.empty())
                return false;
            i.pop();
        }
    }

    return i.empty() ? 1 : 0 ;
}