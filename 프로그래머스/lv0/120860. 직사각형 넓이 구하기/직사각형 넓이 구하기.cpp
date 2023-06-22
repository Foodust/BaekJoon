#include <string>
#include <vector>
#include <math.h>
using namespace std;

int solution(vector<vector<int>> dots) {
	int x1 = min(min(dots[0][0], dots[1][0]), min(dots[2][0], dots[3][0]));
	int y1 = min(min(dots[0][1], dots[1][1]), min(dots[2][1], dots[3][1]));
	int x2 = max(max(dots[0][0], dots[1][0]), max(dots[2][0], dots[3][0]));
	int y2 = max(max(dots[0][1], dots[1][1]), max(dots[2][1], dots[3][1]));
	return (x2 - x1) * (y2 - y1);
}