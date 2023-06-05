#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    string answer;
    for (auto c : str) 
    {
        if (islower(c)) 
            answer+= toupper(c);
        else if (isupper(c)) 
            answer+= tolower(c);
    }
    cout << answer;
    return 0;
}