#include<iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (auto a : queries)
    {
        int temp = arr[a[0]];
        arr[a[0]] = arr[a[1]];
        arr[a[1]] = temp;
    }

    return arr;
}