#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer(num_list.size() / n);
    int j = 0;
    for (int i = 0; i < num_list.size() / n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            answer[i].push_back(num_list[j]);
            j++;
        }
    }
    return answer;
}