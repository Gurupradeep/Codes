#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
      int t,m,n,a[10001],i,j;
       scanf("%d",&t);
       while(t--)
           {
              scanf("%d %d",&m,&n);
              for(i=0;i<n;i++)
                  scanf("%d",&a[i]);
              for(i=0;i<n;i++)
                  {
                    for(j=i+1;j<n;j++)
                        {
                          if(a[i]+a[j]==m)
                              {
                              printf("%d %d\n",i+1,j+1);
                             break;
                          }
                    }
              }
       }
    return 0;
}
