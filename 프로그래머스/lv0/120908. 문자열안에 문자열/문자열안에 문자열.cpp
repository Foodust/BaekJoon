#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string str1, string str2) {
    return str1.find(str2) != -1 ? 1 : 2;
}