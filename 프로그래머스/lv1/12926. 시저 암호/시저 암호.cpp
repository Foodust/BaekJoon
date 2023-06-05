#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    
    for(int i =0; i< s.length();i++ )
    {
        if(s[i] != ' ')
        {
            char start = ('A' <= s[i] && s[i] <= 'Z') ? 'A' : 'a';
            s[i] = start+(s[i] +n - start) % 26;
        }
        
     }
    return s;
}