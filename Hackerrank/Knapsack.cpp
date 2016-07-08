#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
            int t,s[2000],n,a[2000],k,i,j;
            scanf("%d",&t);
            while(t--)
                {
                  scanf("%d %d",&n,&k);
                  for(i=0;i<n;i++)
                      scanf("%d",&a[i]);
                for(i=0;i<=k;i++)
                    s[i]=0;
                s[0]=1;
                for(i=0;i<n;i++)
                    {
                       for(j=a[i];j<=k;j++)
                           s[j]=s[j] | s[j-a[i]];
                }
                for(i=k;i>0;i--)
                    {
                      if(s[i]==1)
                          {
                          printf("%d\n",i);
                          break;
                      }

                }
                if(k<*min_element(a,a+n))
                    printf("0\n");
            }

    return 0;
}
