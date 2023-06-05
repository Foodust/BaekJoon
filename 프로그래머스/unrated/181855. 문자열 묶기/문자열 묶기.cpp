#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    map<int, int> a;
    for (int i = 0; i < strArr.size(); i++)
    {
        a[strArr[i].size()]++;
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (answer < a[i])
            answer = a[i];
    }
    return answer;
}