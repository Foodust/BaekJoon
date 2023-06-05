#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    return (angle < 90) ? 1 : ((angle == 90) ? 2: ((angle / 90) + 2));
}