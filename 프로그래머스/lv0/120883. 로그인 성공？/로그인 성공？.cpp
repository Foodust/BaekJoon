#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    for (const auto& a : db)
    {
        if (a[0] == id_pw[0] && a[1] != id_pw[1])
            return "wrong pw";
        if (a[0] == id_pw[0] && a[1] == id_pw[1])
            return "login";
    }
    return "fail";
}