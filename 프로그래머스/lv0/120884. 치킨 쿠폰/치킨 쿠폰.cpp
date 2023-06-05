#include <string>
#include <vector>
#include<iostream>
using namespace std;

int solution(int chicken) {
    int answer = 0, coupon=0;
    coupon = chicken;
    while (coupon >= 10)
    {
        int newchicken = coupon / 10;
        answer += newchicken;
        coupon = coupon % 10 + newchicken;
    }

    return answer;
}
