#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
       long long int n,a,b,k,m,sum,avg,i;
       scanf("%lld%lld",&n,&m);
       for(i=1;i<=m;i++)
           {
                scanf("%lld%lld%lld",&a,&b,&k);
                sum=sum+(k*(b-a+1));

       }
              avg=sum/n;
              printf("%lld",avg);



    return 0;
}
