#include <iostream>
#include <vector>
#include <regex>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for (const string& word : babbling)
        if (regex_match(word, regex("^(aya|ye|woo|ma)*$")))
            answer++;
    return answer;
}