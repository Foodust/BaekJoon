#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int a = 1;
    while (a < arr.size())
        a *= 2;
    arr.resize(a, 0);
    return arr;
}