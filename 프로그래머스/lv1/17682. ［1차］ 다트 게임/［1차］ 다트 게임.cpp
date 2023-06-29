#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> v;
    int pn = 0;
    int nn=0;
    string pc = "";
    for (int i = 0; i < dartResult.size(); i++)
    {
        switch (dartResult[i])
        {
        case 'S':
            v[nn - 1] = pow(v[nn-1],1);
            break;
        case 'D':
            v[nn - 1] = pow(v[nn-1],2);
            break;
        case 'T':
            v[nn - 1] = pow(v[nn-1],3);
            break;
        case '*':
            if (nn >= 1)
                v[nn - 2] *= 2;
            v[nn-1] *= 2;
            break;
        case '#':
            v[nn-1] = -(abs(v[nn-1]));
            break;
        default:
            if (dartResult[i] == '1' && dartResult[i + 1] == '0')
            {
                v.push_back(10);
                i++;
            }
            else
                v.push_back(dartResult[i] - 48);
            nn++;
            break;
        }
    }
    for (auto iter : v)
        answer += iter;
    return answer;
}