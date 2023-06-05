#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int i = n;
    while (i != 1)
    {
        answer.push_back(i);
        if (i & 1)
        {
            i = 3 * i + 1;
        }
        else
        {
            i /= 2;
        }
    }
    answer.push_back(i);
    return answer;
}