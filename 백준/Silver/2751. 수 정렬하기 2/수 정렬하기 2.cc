#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
        int a;
        vector<int> c;
        cin >> a;
        for(int i = 0 ; i < a ;  i++)
        {
                int b;
                cin >> b;
                c.push_back(b);
        }
        sort(c.begin(),c.end());
        for(int i = 0 ; i <c.size(); i ++)
        {
                cout << c[i] << "\n";
        }
}
