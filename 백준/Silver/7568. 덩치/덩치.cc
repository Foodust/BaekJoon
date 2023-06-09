#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main()
{
    int a;
    int b;
    pair<int, int> c[50];
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> c[i].first >> c[i].second;
    }
    for (int i = 0; i < a; i++)
    {
        b = 1;
        for (int j = 0; j < a; j++)
        {
            if (c[i].first < c[j].first && c[i].second < c[j].second)
                b++;
        }
        cout << b << ' ';

    }

}
