#include<bits/stdc++.h> 
using namespace std;
string solution(vector<int> numbers, string hand) {
	string answer = "";
	int left = 10, right = 12;
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] % 3 == 1)
		{
			answer += "L";
			left = numbers[i];
		}
		else if (numbers[i] % 3 == 0 && numbers[i] != 0)
		{
			answer += "R";
			right = numbers[i];
		}
		else
		{
			if (numbers[i] == 0)
			{
				numbers[i] = 11;
			}
			int temp1 = abs(left - numbers[i]);
			int temp2 = abs(right - numbers[i]);

			int dis1 = (temp1 / 3) + (temp1 % 3);
			int dis2 = (temp2 / 3) + (temp2 % 3);

			if(dis1 == dis2)
			{
				if (hand == "right")
				{
					answer += "R";
					right = numbers[i];
				}
				else
				{
					answer += "L";
					left = numbers[i];
				}
			}
			else if (dis1 < dis2)
			{
				answer += "L";
				left = numbers[i];
			}
			else 
			{
				answer += "R";
				right = numbers[i];
			}
		}
	}
	return answer;
}