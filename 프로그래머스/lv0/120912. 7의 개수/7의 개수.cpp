#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) 
{
    int answer = 0;
    for (auto a : array)
    {
        string b = to_string(a);
        for (int i = 0; i < b.size(); i++)
            if (b[i] == '7')
                answer++;
    }
    return answer;
}