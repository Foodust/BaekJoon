#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end(), greater<int>());
    int temp = numbers[0] * numbers[1];
    sort(numbers.begin(), numbers.end());
    int temp2 = numbers[0] * numbers[1];
    return temp > temp2 ? temp : temp2;

}