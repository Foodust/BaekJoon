#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    answer.push_back(toupper(s[0]));
    for(int i =1; i< s.size(); i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            answer.push_back(s[i]);
            continue;  
        } 
        
        if(s[i - 1] == ' ')
            answer.push_back(toupper(s[i]));
        else 
            answer.push_back(tolower(s[i]));
        
    }
    
    return answer;
}