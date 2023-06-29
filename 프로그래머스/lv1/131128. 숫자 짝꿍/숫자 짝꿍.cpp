#include<iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
    map<int, int> x;
    map<int, int> y;
    for (auto iter : X)
        x[iter - 48]++;
    for (auto iter : Y)
        y[iter - 48]++;

    for (int i = 9; i >= 0; i--)
        if (x[i] >= 1 && y[i] >= 1)
            for (int j = 0; j < min(x[i], y[i]); j++)
                answer += to_string(i);
    if (answer == "")
        return "-1";
    else if (answer[0] == '0')
        return "0";
    else
        return answer;
}