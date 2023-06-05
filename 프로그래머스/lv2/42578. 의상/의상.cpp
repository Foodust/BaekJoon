#include <string>
#include <vector>
#include<map>
using namespace std;

int solution(vector<vector<string>> clothes) 
{
    int answer = 1;
    map<string, int>m_Map;
    
    for(auto iter : clothes)
        m_Map[iter[1]] += 1;
    
    for(auto iter = m_Map.begin(); iter != m_Map.end(); iter++)
        answer *= iter->second + 1;
    
    return answer -1;
    
    
}