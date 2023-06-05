#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    
    for (auto& a : myString)
    {
        if (a == 'a' || a=='A')
            a = 'A';
        else
            a = tolower(a);
    }
    return myString;
}