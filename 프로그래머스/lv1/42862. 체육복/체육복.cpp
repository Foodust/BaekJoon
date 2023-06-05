#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n;
    vector<int> check(n, 1);
    for (auto l : lost)
        check[l - 1]--;
    for (auto r : reserve)
        check[r - 1]++;

    for (int i = 0; i < n; i++)
    {
        if (check[i] == 0)
        {
            if (i > 0 && check[i - 1] == 2)
            {
                check[i - 1]--;
                check[i]++;
            }
            else if (i < n - 1 && check[i + 1] == 2)
            {
                check[i + 1]--;
                check[i]++;
            }
            else
                answer--;
        }
    }
    return answer;
}