#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,a[102],m,s,tm,b;
    cin>>t;

    while(t--)
        {
          cin>>m>>s>>tm;
          for(int i=0;i<=100;i++)
              a[i]=0;
          while(m--)
              {
                 cin>>b;
                 for(int i=max(1,b-(s*tm));i<=min(100,b+(s*tm));i++)
                     a[i]=1;
          }
          int ans=0;
          for(int i=1;i<=100;i++)
              {
                if(a[i]==0)
                    ans++;
          }
          printf("%d\n",ans);

    }
    return 0;
}
