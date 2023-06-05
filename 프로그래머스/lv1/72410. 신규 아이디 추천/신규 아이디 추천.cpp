#include <string>
#include <vector>
#include <iostream>
#include<regex>
using namespace std;

string solution(string new_id) {
    string answer = "";
    for (int i = 0; i < new_id.size(); i++)
    {
        new_id[i] = tolower(new_id[i]);
    }
    new_id = regex_replace(new_id, regex("[^a-z0-9-_.]+"), "");
    int count = 0;
    new_id = regex_replace(new_id, regex("[.]+"), ".");
    if (new_id[0] == '.')
    {
        new_id.erase(remove(new_id.begin(), new_id.begin(),'.'));
    }
    if (new_id[new_id.size() -1] == '.')
    { 
        new_id.erase(remove(new_id.end() - 1, new_id.end() - 1,'.'));
    }
    if (new_id == "")
    { 
        new_id = "a"; 
    }
    if (new_id.size() >= 16)
    { 
        new_id.erase(15, new_id.size() - 1); 
    }
    if (new_id[new_id.size() - 1] == '.') 
    { 
        new_id.erase(remove(new_id.end() - 1, new_id.end() - 1, '.'));
    }
    while (new_id.size() <= 2)
    { 
        new_id.push_back(new_id[new_id.size() - 1]);
    }
    answer = new_id;
    cout << answer;
    return answer;
}

int main()
{
    string a = "...!@BaT#*..y.abcdefghijklm";
    solution(a);
}