#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,j;
     long long int a,b,i,c,d,count;
    scanf("%d",&t);
    while(t--)
        {
            count=0;
           scanf("%lld%lld",&a,&b);

        for(i=a;i<=b;i++)
            {    c=0;
               j=(int)(sqrt(i));

                if(j*j==i)
                    {
                    c=j;
                    //printf("%d\n",c);

                    break;
                }


            }
            for(i=b;i>=a;i--)
                {
                   d=0;
                j=(int)(sqrt(i));
                if(j*j==i)
                    {
                    d=j;
                    break;
                }
            }
            if(c==0&& d==0)
                count=0;
        else
            count=d-c+1;


        printf("%lld\n",count);
    }
    return 0;
}
