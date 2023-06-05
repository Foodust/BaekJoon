#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int count = 0;
    queue<pair<int, int>>q;
    priority_queue<int>e;

    for (int i = 0; i < priorities.size(); i++)
    {
        q.push(make_pair(i, priorities[i]));
        e.push(priorities[i]);
    }
    while (!q.empty())
    {
        int fir = q.front().first;
        int sec = q.front().second;

        q.pop();

        if (e.top() == sec)
        {
            e.pop();
            ++count;
            if (fir == location)
            {
                answer = count;
                break;
            }
        }
        else
        {
            q.push(make_pair(fir, sec));
        }
    }

    return answer;
}