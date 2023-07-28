#include <string>
#include <vector>

using namespace std;

void hanoi(int n, int from, int to, int via, vector<vector<int>>& moves) 
{
    if (n == 1) 
        moves.push_back(vector<int>{from, to});
    else 
    {
        hanoi(n - 1, from, via, to, moves);
        moves.push_back(vector<int>{from, to});
        hanoi(n - 1, via, to, from, moves);
    }
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    hanoi(n, 1, 3, 2,answer);
    return answer;
}