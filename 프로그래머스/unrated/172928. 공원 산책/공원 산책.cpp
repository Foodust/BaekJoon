#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
	vector<int> answer;
	int ny = 0, nx = 0;
	int ax = 0, ay = 0;
	int mx = park[0].size(), my = park.size();
	bool no = false;
	for (int i = 0; i < park.size(); i++)
	{
		for (int j = 0; j < park[i].size(); j++)
		{
			if (park[i][j] == 'S')
			{
				nx = j;
				ny = i;
				ax = j;
				ay = i;
			}
		}
	}
	for (auto iter : routes)
	{
		int go = 1;
		switch (iter[0])
		{
		case 'E':
			go = 1;
			break;
		case 'W':
			go = -1;
			break;
		case 'S':
			go = 10;
			break;
		case 'N':
			go = -10;
			break;
		default:
			break;
		}
		go *= iter[2] - 48;
		nx += go % 10;
		ny += go / 10;
		if ((nx < 0) || (ny < 0) || (nx >= mx)|| (ny >= my))
			no = true;
		else
		{
			for (int i = ax; i <= nx; i++)
			{
				if (park[ny][i] == 'X')
					no = true;
			}
			for (int i = ax; i >= nx; i--)
			{
				if (park[ny][i] == 'X')
					no = true;
			}
			for (int i = ay; i <= ny; i++)
			{
				if (park[i][nx] == 'X')
					no = true;
			}
			for (int i = ay; i >= ny; i--)
			{
				if (park[i][nx] == 'X')
					no = true;
			}
		}
		if (no)
		{
			nx -= go % 10;
			ny -= go / 10;
		}
		else
		{
			ax = nx;
			ay = ny;
		}
		cout << "\n";
		no = false;
	}
	return { ay,ax };
}
