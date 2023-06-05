#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
	for (auto& a : myString)
	{
		if (a == 'A')
			a = 'B';
		else
			a = 'A';
	}
	return myString.find(pat) != string::npos ? 1 : 0;
}