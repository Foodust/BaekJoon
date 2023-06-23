#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    int c = 0, c2 = 0;
    string temp=s;
    while (1)
    {
        string t2;
        if (temp.size() == 1)
            break;
        for (auto i : temp)
        {
            if (i == '0')
                c2++;
            else
                t2 += '1';
        }
        string t3;
        int st = t2.size();
        while (st > 0) {
            if (st % 2 == 0) 
                t3 += "0";
            else 
                t3 += "1";
            st /= 2;
        }
        temp = t3;
        c++;
    }
    return vector<int>{c, c2};
}
