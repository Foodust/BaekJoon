#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for (auto& a : myString)
        if (a < 108)
            a = 'l';
    return myString;
}