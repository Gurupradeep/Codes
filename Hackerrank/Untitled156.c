#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int cmpfunc(const void *a,const void *b);

int main() {
             int n,a[101],i;
             scanf("%d",&n);
             for(i=0;i<n;i++)
                 {
                 scanf("%d",&a[i]);
             }
             qsort(a,n,sizeof(int),cmpfunc);
             for(i=0;i<n;i=i+2)
                 {
                    if(a[i]!=a[i+1])
                        {
                        printf("%d",a[i]);
                        break;
                    }

             }
    return 0;
}
int cmpfunc(const void *a,const void *b)
    {
    int *p=(int *)a;
    int *q=(int *)b;
    return(*p-*q);
}
