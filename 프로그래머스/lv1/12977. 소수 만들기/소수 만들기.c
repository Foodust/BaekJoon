#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// nums_len은 배열 nums의 길이입니다.
bool sosu(int num)
{   
    if(num==0 || num==1) 
        return false;
    for(int i=2; i < num / 2; i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}
int solution(int nums[], size_t nums_len) 
{
    int answer = 0;

    for(int a= 0; a< nums_len; a++)
    {
        for(int b = a+1; b< nums_len; b++)
        {
            for(int c= b+1; c< nums_len; c++)
            {
               int temp = nums[a] + nums[b] + nums[c];
               if(sosu(temp) == true)
                   answer++;
            }
        }
    }
    
    return answer;
}