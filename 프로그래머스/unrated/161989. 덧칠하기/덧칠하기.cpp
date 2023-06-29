#include <string>
#include <vector>
using namespace std;
int solution(int n, int m, vector<int> section) {
    int answer = 0;

    while (!section.empty())
    {
        int a = 0;
		for (int i = 0; i < section.size(); i++)
		{
            if (section[i] <= section[0] + m - 1)
                a = i;
            else
            {
                a = i-1;
                break;
            }
		}
        for (int i = 0; i < a+1; i++)
            section.erase(section.begin());
        answer++;
    }

    return answer;
}