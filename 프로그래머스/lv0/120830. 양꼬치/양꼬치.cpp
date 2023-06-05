#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    return (n* 12000) -  (((n * 12000) / 120000) * 2000) + (k *2000);
}