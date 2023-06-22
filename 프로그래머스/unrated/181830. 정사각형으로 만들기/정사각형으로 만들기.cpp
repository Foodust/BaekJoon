#include <string>
#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    int max = 0;
    int count = 0;
    for (auto &i : arr)
    {
        if (max < i.size())
            max = i.size();
    }
    if (max < arr.size())
        max = arr.size();
    for (auto &i : arr)
    {
        i.resize(max, 0);
    }
    while(arr.size() < max)
    {
        vector<int> temp;
        for (int i = 0; i < max; i++)
        {
            temp.push_back(0);
        }
        arr.push_back(temp);
    }
    return arr;
}