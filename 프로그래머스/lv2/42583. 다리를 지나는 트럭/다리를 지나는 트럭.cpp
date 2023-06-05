#include <string>
#include <vector>
#include<queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    
    int Time = 0, CurrentWeight = 0; // 경과 시간, 현재 도로위 무게
    queue<int> List, Distance;         // 도로 위  리스트    // 도로 위 남은 거리
    
    while(true)
    {
        int size = Distance.size();
        
        for(int i = 0; i <size; i++)
        {
            int length = Distance.front();
            Distance.pop();
            
            if(length <= 1)
            {
                CurrentWeight -= List.front();
                List.pop();
                continue;
            }
            Distance.push(length -1);
        }
        if(truck_weights.size() >0  && CurrentWeight + truck_weights.at(0) <= weight)
        {
            List.push(truck_weights.at(0));
            CurrentWeight += truck_weights.at(0);
            Distance.push(bridge_length);
            truck_weights.erase(truck_weights.begin());
        }
        Time++;
        if(truck_weights.size() == 0 && List.size() == 0)
            break;
    }
    return Time;
}