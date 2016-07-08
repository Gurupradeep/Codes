#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100000
#define MAX_VAL 1000000001


/** The code to read from STDIN and output to STDOUT has been provided by us, for convenience. You may or may not use this. **/
 int cmpfunc(const void *a,const void *b);
int main() {

    int n,k,min;
    long long int a[100000];
    int i;

    scanf("%d %d",&n,&k);
    for(i = 0;i < n;i++)
        scanf("%lld",&a[i]);
      qsort(a,n,sizeof(long long int),cmpfunc);
         min=a[k-1]-a[0];
      for(i=1;i+k<n;i++)
          {
             if((a[k+i-1]-a[i])<min)
                 min=a[k+i-1]-a[i];

      }


    int unfairness = min; // Compute the min unfairness over here, using N,K,candies

    printf("%d",unfairness);
    return 0;
}
int cmpfunc(const void *a,const void *b)
    {
    int *p=(int *)a;
    int *q=(int *)b;
    return(*p-*q);
}
