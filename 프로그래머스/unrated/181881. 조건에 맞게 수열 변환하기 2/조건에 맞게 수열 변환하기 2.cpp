#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    vector<int> a;
    while (1)
    {
        a = arr;
        for (auto& b : arr)
        {
            if (b >= 50 && b % 2 == 0)
                b /= 2;
            else if (b < 50 && b & 1)
                b = b * 2 + 1;
        }
        if (a == arr)
            break;
        answer++;
    }
    return answer;
}