#include <string>
#include <vector>

using namespace std;
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int a = numer1 * denom2 + numer2 * denom1;
    int b = denom1 * denom2;
    int c = gcd(a, b);
    answer.push_back(a / c);
    answer.push_back(b / c);
    return answer;
}

