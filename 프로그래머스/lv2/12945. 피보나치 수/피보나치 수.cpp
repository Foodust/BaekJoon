#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int a[3] = {0,1,0};
    
    for(int i = 2; i <=n ; i++)
    {
        a[2] = a[0]+ a[1];
        if(a[2] > 1234567)
            a[2] = a[2] % 1234567;
        a[0] = a[1];
        a[1] = a[2];
    }
    answer = a[2];
    return answer;
}