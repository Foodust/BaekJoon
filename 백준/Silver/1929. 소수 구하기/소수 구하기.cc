#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int M, N, root;
  cin>>M>>N;
  for(int i=M; i<=N; i++)
  {
    root = sqrt(i);
    if(root == 1 && i != 1)
    {
      cout<<i<<'\n';
      continue;
    }
    if(i%2)
    {      
      for(int j=2; j<=root; j++)
      {
        if(!(i%j))
          break;
        if(j == root)
        {
          cout<<i<<'\n';
        }
      }
    }
  }
}