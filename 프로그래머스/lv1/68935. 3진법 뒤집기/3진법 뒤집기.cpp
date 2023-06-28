#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> temp;
    while (n != 0)
    {
        temp.push_back(n % 3);
        n /= 3;
    }
    int a=1;
    for(int i = temp.size()-1; i >= 0;i--)
    {
        answer += temp[i] * a;
        a *= 3;
    }
    return answer;
}