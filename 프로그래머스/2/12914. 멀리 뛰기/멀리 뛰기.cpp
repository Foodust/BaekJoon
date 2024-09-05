#include<string>
#include <vector>

using namespace std;

long long solution(int n) {
    if (n <= 2) return n;
    
    vector<long long> dynamicProgramming(n+1, 0);
    dynamicProgramming[1] = 1;  
    dynamicProgramming[2] = 2; 
    
    for (int i = 3; i <= n; i++) {
        dynamicProgramming[i] = (dynamicProgramming[i-1] + dynamicProgramming[i-2]) % 1234567;
    }
    
    return dynamicProgramming[n];
}