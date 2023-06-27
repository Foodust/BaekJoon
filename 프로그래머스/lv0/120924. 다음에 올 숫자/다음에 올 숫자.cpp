#include <vector>
using namespace std;
int solution(vector<int> common) {
    return (common[common.size() - 1] - common[common.size() - 2] == common[common.size() -2] - common[common.size() - 3] ? common[common.size() - 1] + common[common.size() - 1] - common[common.size() -2] : common[common.size() -1] * (common[common.size() - 1] / common[common.size() - 2]));
}