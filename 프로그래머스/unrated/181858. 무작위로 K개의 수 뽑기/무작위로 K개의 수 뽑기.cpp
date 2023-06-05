#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    map<int, int> m;
    for (int i = 0; i < arr.size(); i++)
    {
        if (answer.size() >= k)
            break;

        if (!(m[arr[i]] >= 1))
        {
            answer.push_back(arr[i]);
            m[arr[i]]++;
        }
    }


    for (int i = answer.size(); i < k; i++)
        answer.push_back(-1);
    return answer;
}