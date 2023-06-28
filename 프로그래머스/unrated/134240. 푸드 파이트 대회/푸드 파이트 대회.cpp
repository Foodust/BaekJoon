#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string answer2 = "";
    for (int i = 1; i < food.size(); i++)
        for(int j =  0; j< food[i] / 2; j++)
            answer += to_string(i);
    answer2 = answer;
    reverse(answer2.begin(), answer2.end());
    answer += "0" + answer2;

    return answer;
}