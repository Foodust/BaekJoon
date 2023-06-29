#include <string>
#include <vector>
#include <math.h>
using namespace std;

int div(int n)
{
    int num=0;
    for (int i = 1; i <= int(sqrt(n)); i++)
        if (n % i == 0)
        {
            num++;
            if (pow(i,2) != n)
                num++;
        }

    return num;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    for (int i = 0; i <= number; i++)
    {
        int a = div(i);
        if (a > limit)
            answer += power;
        else
            answer += a;
    }
    return answer;
}