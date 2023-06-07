#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (auto a : queries)
    {
        int mi=99998989;
        for (int i = a[0]; i <=a[1]; i++)
        {
            if (arr[i] > a[2])
            {
                mi = min(mi, arr[i]);
            }
        }
        answer.push_back(mi == 99998989 ? -1 : mi);
    }
    return answer;
}