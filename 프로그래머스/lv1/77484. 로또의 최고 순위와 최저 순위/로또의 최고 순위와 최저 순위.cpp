#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    vector<int> temp = win_nums;
    int max = 7, min = 7;
    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());
    
    for(int i =  0 ; i < 6; i++)
    {
        if(lottos[i] == 0)
        {
            max--;
            continue;
        
        }
        if(find(temp.begin(), temp.end(),lottos[i]) != temp.end())
        {
            max--;
            min--;
        }
    }
    if(!max)max=1;
    if(!min)min=1;
    if(max==7)max=6;
    if(min==7)min=6;
    answer.push_back(max);
    answer.push_back(min);
    
    return answer;
}