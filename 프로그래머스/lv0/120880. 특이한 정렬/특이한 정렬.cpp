#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<pair<int, int>> distAndNum;
    for (int num : numlist) {
        int dist = abs(num - n);
        distAndNum.push_back({dist, num});
    }

    sort(distAndNum.begin(), distAndNum.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second > b.second;
        }
        return a.first < b.first;
    });

    vector<int> sortedNumlist;
    for (const auto& pair : distAndNum) {
        sortedNumlist.push_back(pair.second);
    }

    return sortedNumlist;
}