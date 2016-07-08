#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     int t,n,a,b,c,i,temp;
    scanf("%d",&t);
    while(t--)
        {
        scanf("%d%d%d",&n,&a,&b);
        if(a>b)
            {
            temp=a;
            a=b;
            b=temp;
        }

        for(i=n-1;i>=0;i--)
            {
              c=0;

               c=(i*a)+((n-1-i)*b);
               if(a==b)
                   {
                   printf("%d",c);
                   break;
               }
            printf("%d\t",c);
        }
        printf("\n");
    }
    return 0;
}
