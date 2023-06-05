#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string a = to_string(order);
    for (int i = 0; i < a.size(); i++)
    {
        printf("%c\n", a[i]);
        if (a[i] == '0')
            continue;
        if ((int)(a[i]) % 3 == 0)
            answer += 1;
    }
    return answer;
}