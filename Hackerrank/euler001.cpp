#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long t,n,i,ans;
    scanf("%lld",&t);
      for(int j=0;j<t;j++)
        {
           ans=0;
           scanf("%lld",&n);

                  for(i=3;i<n;i=i+3)
                            ans=ans+i;
          for(i=5;i<n;i=i+5)
              {
                  if(i%3!=0)
                            ans=ans+i;
          }
          printf("%lld\n",ans);
    }
}


