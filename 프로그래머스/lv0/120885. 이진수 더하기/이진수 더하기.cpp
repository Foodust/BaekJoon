#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string solution(string bin1, string bin2) {
    string answer;
    int carry = 0;
    int i = bin1.length() - 1;
    int j = bin2.length() - 1;
    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? bin1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? bin2[j--] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 2;
        answer.push_back('0' + (sum % 2));
    }
    reverse(answer.begin(), answer.end());
    return answer;
}
