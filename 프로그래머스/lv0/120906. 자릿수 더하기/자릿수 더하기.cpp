#include <string>
#include <vector>
#include<iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    string a = to_string(n);
    for (auto b : a)
        answer += (int)b - '0';
    return answer;
}