#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;

    if (direction == "left")
    {
        int temp = numbers.front();
        numbers.erase(numbers.begin());
        numbers.push_back(temp);
    }
    else
    {
        int temp = numbers.back();
        numbers.erase(numbers.end() - 1);
        numbers.insert(numbers.begin(), temp);
    }
    return numbers;
}   
