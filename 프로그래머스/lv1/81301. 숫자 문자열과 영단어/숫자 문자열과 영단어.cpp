#include<iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int count = 0;
    string asd;
    while (1)
    {
        if (s[count] == NULL)
        {
            break;
        }
        if (s[count] <= 122 && s[count] >= 97)
        {
            string qwe, zxc;
            int temp = count;
            while (1)
            {

                if (s[temp] <= 122 && s[temp] >= 97)
                {
                    temp++;
                }
                else
                {
                    break;
				}
				qwe = s.substr(count, temp - count);
				if (qwe == "zero") { zxc = "0";   break; }
				if (qwe == "one") { zxc = "1";   break; }
				if (qwe == "two") { zxc = "2";   break; }
				if (qwe == "three") { zxc = "3";   break; }
				if (qwe == "four") { zxc = "4";   break; }
				if (qwe == "five") { zxc = "5";   break; }
				if (qwe == "six") { zxc = "6";   break; }
				if (qwe == "seven") { zxc = "7";   break; }
				if (qwe == "eight") { zxc = "8";   break; }
				if (qwe == "nine") { zxc = "9";   break; }

            }
            
            cout << qwe << " ";
            count += qwe.size();
            asd += zxc;
        }
        else
        {
            asd += s[count];
            count++;
        }
    }
    cout << endl << asd << endl;
    answer = atol(asd.c_str());
    return answer;
}