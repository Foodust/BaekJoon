#include<iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int ps = p.size();
    for (int i = 0; i <= t.size() - ps; i++)
    {
        if (stol(t.substr(i,ps)) <= stol(p))
            answer++;
    }
    return answer;
}