#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    vector<string> a;
    string temp;
    for (int i = 0; i < my_string.size(); i++)
    {
        if (i % m == 0 && temp != "")
        {
            a.push_back(temp);
            temp = "";
        }
        temp += my_string[i];
    }
    a.push_back(temp);
    for (int i = 0; i < a.size(); i++)
    {
        answer += a[i][c-1];
    }
    return answer;
}