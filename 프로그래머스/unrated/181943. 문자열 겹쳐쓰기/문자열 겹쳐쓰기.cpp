#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    int j = 0;
    for (int i = 0; i < my_string.size(); i++)
    {
        if (i == s)
        {
            for (;j < overwrite_string.size(); j++)
            {
                answer += overwrite_string[j];
            }
            i += j;
            if (i >= my_string.size())
                break;
        }
        answer += my_string[i];
    }
    return answer;
}