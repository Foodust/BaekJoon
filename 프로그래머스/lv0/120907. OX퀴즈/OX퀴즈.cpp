#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for (auto a : quiz)
    {
        int c, b, z;
        char op, an;

        stringstream ss;
        ss.str(a);
        ss >> c >> op >> b >> an >> z;
        cout << c << " " << " " << op << " " << b << " " << " " << an << " " << z << endl;
        switch (op)
        {
        case '+':
            if (c + b == z)
                answer.push_back("O");
            else
                answer.push_back("X");
            break;
        case '-':
            if (c - b == z)
                answer.push_back("O");
            else
                answer.push_back("X");
            break;
        default:
            break;
        }
    }
    return answer;
}