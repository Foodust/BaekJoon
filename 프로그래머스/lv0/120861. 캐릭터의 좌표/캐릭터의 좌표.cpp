#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int x = 0, y = 0;
    for (auto a : keyinput)
    {
        if (a == "left")
        {
            if (x > -(board[0] / 2))
                x -= 1;
        }
        else if (a == "right")
        {
            if (x < board[0] / 2)
                x += 1;
        }
        else if (a == "up")
        {
            if (y < board[1] / 2)
                y += 1;
        }
        else if (a == "down")
        {
            if (y > -(board[1] / 2))
                y -= 1;
        }
    }
    answer.push_back(x);
    answer.push_back(y);
    return answer;
}