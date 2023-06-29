#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

vector<int> solution(vector<string> wallpaper) {
	vector<int> answer;
	int maxx = 0, maxy = 0;
	int minx = 51, miny = 51;
	for(int i = 0 ; i < wallpaper.size();i++)
	{
		int a = wallpaper[i].find('#');
		int b = wallpaper[i].rfind('#');
		if (a != string::npos)
		{
			miny = min(miny, i);
			minx = min(minx, a);
			maxy = max(maxy, i+1);
			maxx = max(maxx, b+1);
		}
	}
	return {miny,minx,maxy,maxx};
}