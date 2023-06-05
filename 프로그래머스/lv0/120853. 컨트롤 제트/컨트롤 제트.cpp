#include <iostream>
#include <string>
#include <vector>
#include<stack>
using namespace std;

int solution(string s) {
    int answer = 0;
    bool m = false;
    string temp = "";
    stack<int> st;
    for (auto iter : s)
    {
        if (iter == '-')
            m = true;
        else if (iter == ' ' && temp != "")
        {
            if (m)
            {
                st.push(-stoi(temp));
                m = false;
            }
            else
            {
                st.push(stoi(temp));
            }
            temp = "";
        }
        else if (iter == 'Z')
            st.pop();
        else
            temp += iter;
    }
    if (temp != "")
    {
		if (m)
			st.push(-stoi(temp));
		else
			st.push(stoi(temp));
    }
    while (!st.empty())
    {
        answer += st.top();
        st.pop();
    }
    return answer;
}
