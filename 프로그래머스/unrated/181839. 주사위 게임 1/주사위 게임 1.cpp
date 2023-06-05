#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    if ((a & 1) && (b & 1))
        return a * a + b * b;
    else if (a & 1 || b & 1)
        return 2 * (a + b);
    else
        return abs(a -b);
}