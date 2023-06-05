#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    
    for(int i = 0 ; i < myString.size(); i++)
        myString[i] = tolower(myString[i]);
    for (int i = 0; i < pat.size(); i++)
        pat[i] = tolower(pat[i]);
    return myString.find(pat) != string::npos ? 1 : 0;
}