#include<iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<stack>
using namespace std;

int solution(string s) {
    int answer = 0;
    for (int i = 0; i < s.size(); i++)
    {
        rotate(s.begin(), s.begin() + 1, s.end());
        stack<char> a;
        bool out = false;
        for (int j = 0; j < s.size(); j++)
        {
            
            if (s[j] == '[' || s[j] == '{' || s[j] == '(')
            {
                out = true;
                a.push(s[j]);
            }
            else 
            {
                if (s[j] == ']' && a.top() == '[')
                    a.pop();
                if (s[j] == '}' && a.top() == '{')
                    a.pop();
                if (s[j] == ')' && a.top() == '(')
                    a.pop();
            }
        }
        if (a.empty() && out)
            answer++;
    }
    return answer;
}