#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> money) {
    vector<int> gusurum(n +1);
    
    gusurum[0] = 1;
    
    for(int coin : money)
    {
        for(int i = coin; i <= n; ++i)
        {
            gusurum[i] += gusurum[i - coin];
            gusurum[i] %= 1000000007;
        }
    }
    
    return gusurum[n];
}