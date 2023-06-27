#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    return double(dots[0][0] - dots[1][0]) / double(dots[0][1] - dots[1][1]) == double(dots[2][0] - dots[3][0]) / double(dots[2][1] - dots[3][1]) ? 1 :
        double(dots[0][0] - dots[2][0]) / double(dots[0][1] - dots[2][1]) == double(dots[1][0] - dots[3][0]) / double(dots[1][1] - dots[3][1]) ? 1 :
        double(dots[0][0] - dots[3][0]) / double(dots[0][1] - dots[3][1]) == double(dots[1][0] - dots[2][0]) / double(dots[1][1] - dots[2][1]) ? 1 : 0;
}