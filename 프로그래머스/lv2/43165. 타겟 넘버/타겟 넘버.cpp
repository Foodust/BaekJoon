#include<bits/stdc++.h>
using namespace std;

int answer = 0;

void asd(vector<int> numbers, int target, int sum, int index)
{
    if (index == numbers.size())
    {
        if (sum == target)
        {
            answer++;
        }
        return;
    }

    asd(numbers, target, sum + numbers[index], index + 1);
    asd(numbers, target, sum - numbers[index], index + 1);

}


int solution(vector<int> numbers, int target) {

    asd(numbers, target, 0, 0);

    return answer;
}