#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    string temp;
    for (auto iter : ingredient)
        temp += to_string(iter);

    int pos = 0;
    while (1)
    {
        auto i = temp.find("1231",pos);
        if ( i == string::npos)
            break;
        else
        {
            answer++;
            temp.erase(i, 4);
            if (i > 2)
                pos = i - 3;
        }
    }

    return answer;
}
