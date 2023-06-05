#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    
    string answer1 = "";
    string answer2 = "";
    answer1 = to_string(a) + to_string(b);
    answer2 = to_string(b) + to_string(a);
    return stoi(answer1) >= stoi(answer2) ? stoi(answer1): stoi(answer2) ;
}