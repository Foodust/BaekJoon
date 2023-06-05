#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int count = 0;
    sort(d.begin(), d.end());
    for (int i = 0; i < d.size(); i++)
    {
        if (answer < budget)
        {
            count += d[i];
            if (count > budget)
            {
                break;
            }
            else
                answer++;

        }
    }
    return answer;
}