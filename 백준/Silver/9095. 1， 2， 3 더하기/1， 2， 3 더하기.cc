#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a;

    int c[13];
    c[1] = 1;
    c[2] = 2;
    c[3] = 4;
    for (int i = 4; i < 12; i++)
    {
        c[i] = c[i - 1] + c[i - 2] + c[i - 3];
    }
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        cout << c[b] << '\n';
    }
}