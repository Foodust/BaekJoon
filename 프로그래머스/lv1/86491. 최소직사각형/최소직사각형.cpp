#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int w=0,h=0;
    for (auto iter : sizes)
    {
        auto a = max(iter[0], iter[1]);
        auto b = min(iter[0], iter[1]);
        w = max(w, a);
        h = max(h, b);
    }
    return w  * h;
}