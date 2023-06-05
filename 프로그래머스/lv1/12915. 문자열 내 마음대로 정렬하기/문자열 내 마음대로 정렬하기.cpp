#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int N;
 
bool mysort(string a, string b){
    if(a.at(N)!=b.at(N)){
        return a.at(N) < b.at(N);  
    }else{
        return a < b; 
    }

}
 
vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    answer = strings;
    N = n;
    sort(answer.begin(),answer.end(),mysort);
    return answer;
}