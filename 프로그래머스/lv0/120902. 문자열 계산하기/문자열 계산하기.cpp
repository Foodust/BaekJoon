#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    string temp = "";
    bool op = true;
    stack<int> st;
    for (auto iter : my_string)
    {
        if (iter == ' ')
        {
            if (temp != "")
            {
                if (op)
                {
                    st.push(stoi(temp));
                }
                else
                {
                    st.push(-stoi(temp));
                }
                temp = "";
            }
        }
        else if (iter == '+')
        {
            op = true;
        }
        else if (iter == '-')
        {
            op = false;
        }
        else
        {
            temp += iter;
        }
    }
    cout << temp << endl;
    if (temp != "")
    {
        if (op)
        {
            st.push(stoi(temp));
        }
        else
        {
            st.push(-stoi(temp));
        }
    }
    while (!st.empty())
    {
        cout << answer << endl;
        answer += st.top();
        st.pop();
    }
    return answer;
}
