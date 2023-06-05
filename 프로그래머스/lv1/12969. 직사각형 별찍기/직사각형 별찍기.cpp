#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;

    
    for(int k = 0; k< b; k++)
    {
        for(int i = 0; i<a; i++)
            printf("*");
        printf("\n");
    }
    return 0;
}