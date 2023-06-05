#include <string>
#include <vector>
#include <set>

using namespace std;

string solution(string my_string) {
    set<char> a;
    string answer = "";
    for (int i = 0; i < my_string.length(); i++)
    {
        char c = my_string[i];
        if (a.find(c) == a.end()) {
            answer += c;
            a.insert(c);
        }
    }
    return answer;
}