#include <string>
#include <vector>
#include<algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string number = to_string(n);
    sort(number.begin(), number.end(),greater<char>());
    answer = stoll(number);
    return answer;
}