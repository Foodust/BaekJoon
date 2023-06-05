#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int i = 0;
    while (1)
    {
        i++;
        answer *= i;
        if (answer == n)
            return i;
        else if (answer > n)
            return i-= 1;
    }
}