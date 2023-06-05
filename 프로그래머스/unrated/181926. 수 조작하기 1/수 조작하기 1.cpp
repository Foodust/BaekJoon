#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    for (const auto& a : control)
    {
        if (a == 'w')
            n += 1;
        else if (a =='s')
            n -= 1;
        else if (a == 'd')
            n += 10;
        else if (a =='a')
            n -= 10;
    }
    return n;
}