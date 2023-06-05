#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> solution(int n)
{
    set<int> answer;

    for (int i = 2; i * i <= n; i++) 
    {
        while (n % i == 0) 
        {
            answer.insert(i);
            n /= i;
        }
    }
    if (n > 1) 
    {
        answer.insert(n);
    }
    return vector<int>(answer.begin(), answer.end());
}
