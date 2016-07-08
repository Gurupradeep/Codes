#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
      int t,n,i;
      vector<long long >v1,v2;
      long long k,a;
      scanf("%d",&t);
      while(t--)
          {
          scanf("%d %lld",&n,&k);
            for(i=0;i<n;i++)
                {
                  scanf("%lld",&a);
                   v1.push_back(a);
            }
          for(i=0;i<n;i++)
                {
                  scanf("%lld",&a);
                   v2.push_back(a);
            }
           sort(v1.rbegin(),v1.rend());
          sort(v2.begin(),v2.end());
          int flag=1;
          for(i=0;i<n;i++)
              {
                if(v1[i]+v2[i]<k)
                    {
                       flag=0;
                        break;
                }
          }
          if(flag)
              printf("YES\n");
          else
              printf("NO\n");
          v1.clear();
          v2.clear();
      }
    return 0;
}
