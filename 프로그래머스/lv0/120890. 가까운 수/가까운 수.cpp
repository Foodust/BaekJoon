#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int min = 10000;
    int temp = 0;
    sort(array.begin(), array.end());
    for (int i = 0; i < array.size(); i++)
    {
        temp = array[i] - n;
        if (abs(min) > abs(temp))
        {
            min = temp;
            answer = array[i];
        }
    }
    return answer;
}