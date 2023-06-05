#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    return (ineq == ">" && eq == "=") ? 
        n >= m :
        (ineq == "<" && eq == "=") ?
        n <= m :
        (ineq == ">") ?
        n > m :
        n < m;
}