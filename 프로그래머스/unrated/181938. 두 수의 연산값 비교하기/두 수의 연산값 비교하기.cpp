#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string c;
    c = to_string(a) + to_string(b);
    if (2 * a * b > stoi(c))
        return 2 * a * b;
    else
        return stoi(c);

}