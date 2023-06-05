#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string temp;
    for (auto a : myString)
    {
        if (a == 'x' && temp != "")
        {
            answer.push_back(temp);
            temp = "";
        }
        else if(a!='x')
            temp += a;
    }
    if(temp != "")
        answer.push_back(temp);
    sort(answer.begin(), answer.end());
    return answer;
}

int main()
{
    string a = "dxccxbbbxxaaaa";
    vector<string> b = solution(a); 
    for (auto c : b)
        cout << c;

}