#include <string>
#include <vector>
#include <math.h>
using namespace std;

int solution(int n) {
    
    double a = sqrt(n);
    return fmod(a,1) == 0 ? 1 : 2 ;
}