#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    string answer;
    for (auto a : my_string)
    {
        if (isdigit(a))
            answer += a;
        else if (isupper(a))
            answer += tolower(a);
        else if (islower(a))
            answer += toupper(a);
    }

    return answer;
}