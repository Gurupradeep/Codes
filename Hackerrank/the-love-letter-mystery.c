#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    char a[10003];
     int t,c,n,i,n0;
     scanf("%d",&t);
     while(t--)

         {
         c=0;
         scanf(" %s",a);
         n=strlen(a);
         for(i=0;i<n/2;i++)
             {
             n0=abs(a[i]-a[n-1-i]);
                 c=c+n0;
         }
            printf("%d\n",c);

     }
    return 0;
}
