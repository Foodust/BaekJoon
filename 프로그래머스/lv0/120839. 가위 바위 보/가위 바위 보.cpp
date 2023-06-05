#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for(auto a : rsp)
    {
        if(a == '2') answer += "0";
        if(a == '0') answer += "5";
        if(a == '5') answer += "2";
    
    }
    return answer;
}