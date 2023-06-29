#include<iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    for (auto &iter : s)
    {
        for (int i = 0; i < index; i++)
        {
			while (1)
			{
				iter++;
				if (iter > 'z')
					iter = 'a';
				if (skip.find(iter) == string::npos)
					break;
			}
		}
    }

    return s;
}