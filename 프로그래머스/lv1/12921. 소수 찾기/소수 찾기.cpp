#include <string>
#include <vector>
#include<cstring>
using namespace std;

int solution(int n) {
    int answer = 0;
    bool check[n+1];
    memset(check,false,sizeof(check));
    for(int i = 2 ; i <= n ; i++)
    {
        if(!check[i])
            answer++;
        for(int j = i ; j <=n; j+=i)
            check[j] = true;
    }
    return answer;
}