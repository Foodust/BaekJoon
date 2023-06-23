#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool isFiniteFraction(int denominator) {
    while (denominator % 2 == 0) {
        denominator /= 2;
    }
    while (denominator % 5 == 0) {
        denominator /= 5;
    }

    return denominator == 1;
}

int gcd(int a, int b) 
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void simplifyFraction(int& numerator, int& denominator) {
    int commonDivisor = gcd(numerator, denominator);
    if (commonDivisor > 1) 
    {
        numerator /= commonDivisor;
        denominator /= commonDivisor;
    }
}

int solution(int a, int b) {
    if (a % b == 0)
        return 1;
    else
    {
        simplifyFraction(a, b);
        return isFiniteFraction(b) ? 1 : 2;
    }
}