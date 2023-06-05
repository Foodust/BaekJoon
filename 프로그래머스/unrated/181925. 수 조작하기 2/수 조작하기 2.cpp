#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<int> numLog) 
{
    unordered_map<int, string> m = { {1, "w"}, {-1, "s"}, {10, "d"}, {-10, "a"} };
    string result = "";
    for (int i = 1; i < numLog.size(); i++) 
    {
        int diff = numLog[i] - numLog[i - 1];
        for ( auto a : m)
        {
            if (a.first == diff) 
            {
                result += a.second;
                break;
            }
        }
    }
    return result;
}
