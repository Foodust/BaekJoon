#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    for (int i = 0; i < arr.size(); i++)
    {
        if (stk.empty())
            stk.push_back(arr[i]);
        else if (!stk.empty() && stk.back() < arr[i])
            stk.push_back(arr[i]);
        else
        {
            stk.pop_back();
            i--;
        }
    }
    return stk;
}