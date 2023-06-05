#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    
    int answer=0;
    if(s[0] == '-')
        answer *= -1;
    answer = stoi(s);
    return answer;
}