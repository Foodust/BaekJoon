#include <vector>
#include <string>
#include <iostream>//메인 출력용
#include <algorithm>
using namespace std;
 
 
//정렬을 이용한 솔루션
string solution(vector<string> participant, vector<string> completion)
{
    //참가자와 완주자 리스트를 정렬
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for (int i = 0; i < completion.size(); i++)
    {
        if (participant[i] != completion[i])
        {
            return participant[i];
        }
    }

    return participant[participant.size() - 1];
}
 
int main() {
    vector<string> a = { "marina", "josipa", "nikola", "vinko", "filipa" };
    vector<string> b = { "josipa", "filipa", "marina", "nikola" };
    cout << solution(a, b) << endl;
    return 0;
}