#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int pos = 0;
    while ((pos = myString.find(pat, pos)) != std::string::npos) 
    {
        answer++;
        pos = myString.find(pat, pos + 1);
    }
    return answer;
}