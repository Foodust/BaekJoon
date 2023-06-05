#include <string>
#include <vector>
#include<numeric>
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0, sum = 0, ex=1;
    sum = accumulate(num_list.begin(), num_list.end(), 0);
    sum *= sum;
    for (const auto& a : num_list)
        ex *= a;
    return ex < sum? 1 : 0;
}