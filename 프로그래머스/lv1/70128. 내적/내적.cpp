#include<numeric>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {    
    return inner_product(a.begin(), a.end(), b.begin(),0);
}