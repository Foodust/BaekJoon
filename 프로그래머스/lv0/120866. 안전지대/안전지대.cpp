#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int rows = board.size();
    int cols = board[0].size();
    int answer = 0;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            if (board[i][j] == 0) 
            {
                bool a = true;
                for (int dx = -1; dx <= 1; dx++) 
                {
                    for (int dy = -1; dy <= 1; dy++) 
                    {
                        int nx = i + dx;
                        int ny = j + dy;
                        if (nx < 0 || nx >= rows || ny < 0 || ny >= cols)
                            continue;
                        if (board[nx][ny] == 1) 
                        {
                            a = false;
                            break;
                        }
                    }
                    if (!a)
                        break;
                }
                if (a)
                    answer++;
            }
        }
    }
    return answer;
}