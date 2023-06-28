#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int i = 0,j=0;
    while (i+j < goal.size())
    {
        if (cards1[i] == goal[i+j])
            i++;
        else if (cards2[j] == goal[i+j])
            j++;
        else
            return "No";
    }
    return "Yes";
}