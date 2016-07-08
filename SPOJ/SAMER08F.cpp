#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
    {
      int a;
      cin>>a;
      while(a!=0)
      {
          cout<<((a*(a+1)*(a*2+1))/6)<<endl;
          cin>>a;
      }

      return 0;
}
