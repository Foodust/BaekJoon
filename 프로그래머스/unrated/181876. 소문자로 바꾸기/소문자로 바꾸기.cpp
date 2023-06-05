#include <string>
#include <vector>
#include<cctype>
using namespace std;

string solution(string myString) {
	string answer;
	for (auto a : myString)
		answer += tolower(a);
	return answer;
}