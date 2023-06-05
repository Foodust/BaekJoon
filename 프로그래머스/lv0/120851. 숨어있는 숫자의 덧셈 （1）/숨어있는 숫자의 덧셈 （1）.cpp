#include <string>
#include <vector>

using namespace std;
int solution(string my_string) {
    int answer = 0;
    for ( auto a : my_string)
    {
        if (a> 47 && a< 58) 
            answer += a - 48; 
    }
    return answer;
}