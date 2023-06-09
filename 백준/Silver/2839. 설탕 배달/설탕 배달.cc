#include<iostream>

using namespace std;

int main()
{
        int a, b, c;
        cin >> a;
        b = a / 5;

        while(1)
        {
                if((a-(5*b))%3 == 0)
                {
                        c = (a -(5*b))/3;
                        break;
                }
                --b;
        }
        if(b < 0)
        {
            cout << "-1";
            return 0;
        }
        else
        {
            cout << b + c;
        }
}