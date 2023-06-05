#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string a = to_string(num);
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == (char)(k) + '0')
        {
            return i + 1;
        }
    }
    return answer;
}