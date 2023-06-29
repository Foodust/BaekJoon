#include<iostream>
#include <string>
#include <vector>
#include<math.h>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    for (auto iter : targets)
    {
        int temp = 0;
        for (int i = 0; i < iter.size(); i++)
        {
            int kmin = 999;
            for (auto kiter : keymap)
                if (kiter.find(iter[i]) != string::npos)
                    kmin = min((int)kiter.find(iter[i])+1, kmin);
            temp += kmin;
        }
        if (temp >= 999)
            answer.push_back(-1);
        else
            answer.push_back(temp);
    }
    return answer;
}