#include <string>
#include <iostream>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = to_string(age);
    string a;
    for (int i = 0; i < answer.size(); i++)
    {
        a += (char)(answer[i] + 49);
    }
    return a;
}