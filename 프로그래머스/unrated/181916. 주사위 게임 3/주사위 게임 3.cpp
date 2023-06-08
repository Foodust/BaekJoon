#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(int a, int b, int c, int d) {
    return (a == b && a == c && a == d ? 1111 * a : (a == b && a == c) ? pow(10 * a + d, 2) : (a == b && a == d) ? pow(10 * a + c, 2) :(a == c && a == d) ? pow(10 * a + b, 2) : (b == c && b == d) ? pow(10 * b + a, 2) : (c == b && c == d) ? pow(10 * c + a, 2) : a != b && a != c && a != d && b != c && b != d && c != d ? min({ a, b, c, d }) : a == b && b != c && c != d ? c * d : a == c && a != b && b != d ? b * d : a == d && b != c && c != d ? b * c : b == c && a != d && c != d ? a * d : b == d && a != c && a != d ? a * c : c == d && a != b && c != a ? a * b : a == b && c == d ? (a + c) * (abs(a - c)) : a == c && b == d ? (a + b) * (abs(a - b)) : a == d && b == c ? (a + b) * (abs(a - b)) : 0
        );
}