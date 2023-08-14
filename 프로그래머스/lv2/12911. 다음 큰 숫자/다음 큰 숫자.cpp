#include <string>
#include <vector>
#include <bitset>
#include <iostream>
using namespace std;
int count(const string& str) {
    int count = 0;
    for (auto c : str)
        if (c == '1')
            count++;
    return count;
}
int solution(int n) {
    int answer = 0;
    string b = bitset<32>(n).to_string();
    while (1)
    {
        ++n;
        string c = bitset<32>(n).to_string();
        if (count(b) == count(c))
            return n;
    }
    return answer;
}