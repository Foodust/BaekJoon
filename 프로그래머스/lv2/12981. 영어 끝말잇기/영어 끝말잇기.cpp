#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    map<string, int> prev;
    string w;
    int p = 0, c = 1;

    for (int i = 0; i < words.size(); i++)
    {
        p++;
        if (p > n)
        {
            p = 1;
            c++;
        }
        if (words[i].size() < 2)
            return vector<int>{p, c};
        prev[words[i]]++;
        if (prev[words[i]] >= 2)
            return vector<int>{p, c};
        if (!w.empty() && w[w.size() - 1] != words[i][0])
            return vector<int>{p, c};
        w = words[i];
    }

    return vector<int>{0, 0};
}