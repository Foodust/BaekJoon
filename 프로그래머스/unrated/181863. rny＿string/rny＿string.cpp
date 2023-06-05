#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
	int pos = 0;
    
	while ((pos = rny_string.find('m', pos)) != std::string::npos)
	{
		rny_string.replace(pos, 1, "rn");
		pos += 2;
	}
	return rny_string;
}