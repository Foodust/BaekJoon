#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;

    for (; i <=j; i++)
    {
        string a = to_string(i);
        for (int q = 0; q < a.size(); q++)
        {
            if (a[q] == (char)k + '0')
                answer++;
        }
    }

    return answer;
}