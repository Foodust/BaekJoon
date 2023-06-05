#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int pCount = 0,yCount = 0;
    
    for(int i =0 ; i < s.size(); i++)
    {
        if(s[i] == 'p' || s[i] == 'P')
            pCount++;
        if(s[i] == 'y' || s[i] == 'Y')
            yCount++;

    }
    if(pCount == 0 && yCount == 0)
        return true;
    if(pCount == yCount)
        return true;
    else
        return false;
    
}