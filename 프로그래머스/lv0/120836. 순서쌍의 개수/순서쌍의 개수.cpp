#include <string>
#include <vector>
#include <math.h>
using namespace std;

using namespace std;

int solution(int n) {
    int answer = 0;
    int m=int(sqrt(double(n)));
    for(int i=1; i<=m; i++)
        if(n%i==0) answer+=2;
    
    if(m*m==n) answer--;
    
    return answer;
}