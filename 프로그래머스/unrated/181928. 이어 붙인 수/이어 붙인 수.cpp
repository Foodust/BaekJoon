#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    
    string odd = "", even = "";
    for (const auto& a : num_list)
    {
        if (a % 2 == 0)
            odd += to_string(a);
        else
            even += to_string(a);
    }
    return stoi(odd)+stoi(even);
}