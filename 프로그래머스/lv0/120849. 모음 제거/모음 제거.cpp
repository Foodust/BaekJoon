#include <string>
#include <vector>
#include <regex>
using namespace std;

string solution(string my_string) {
    return regex_replace(my_string, regex("[aeuio]"),"");
}