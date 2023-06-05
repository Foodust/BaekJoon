#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = -1;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (i >= idx)
        {
            if (arr[i] == 1)
            {
                answer = i;
                break;
            }
        }
    }
    return answer;
}

