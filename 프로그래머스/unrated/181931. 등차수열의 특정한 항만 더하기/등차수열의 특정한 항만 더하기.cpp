#include<iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    if (included[0])
        answer = a;
	for (int i = 1; i < included.size(); i++)
    {
        cout << answer<<endl;
        if (included[i])
            answer += a + (i) * d;
    }
    return answer;
}