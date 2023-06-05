#include <string>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;
int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int temp = 0;
    stack<int> st;
    for (int i = 0; i < moves.size(); i++)
    {
        int x = moves[i] - 1, y = 0;
        for (int j = 0; j < board[x].size(); j++)
        {
            if (board[y][x] == 0)
            {
                y++;
                continue;
            }
            else
            {
				st.push(board[y][x]);
				if (temp == board[y][x] && st.size() >= 2)
				{
					st.pop();
					st.pop();
					answer += 2;
					board[y][x] = 0;
				}
                if (!st.empty())
                {
                    temp = st.top();
                }

                board[y][x] = 0;
                break;
            }
        }
    }
    return answer;
}