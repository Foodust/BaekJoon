#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n,vector<int>(n,0));
    int num = 1;
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;
    while (num <= n * n) 
    {
        for (int i = left; i <= right; ++i)
        {
            answer[top][i] = num;
            num++;
        }
        top++;

        for (int i = top; i <= bottom; ++i)
        {
            answer[i][right] = num;
            num++;
        }
        right--;

        for (int i = right; i >= left; --i)
        {
            answer[bottom][i] = num;
            num++;
        }
        bottom--;

        for (int i = bottom; i >= top; --i)
        {
            answer[i][left] = num;
            num++;
        }
        left++;
    }
    return answer;
}