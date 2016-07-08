#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100002],i,n,t,count,k,min;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        min=a[0];
        k=0;
       for(i=1;i<n;i++)
       {
           if(a[i]<min)
           {
            min=a[i];
            k=i;
           }
       }
       if(min<2)
        printf("-1\n");
        else
        {
         a[k]=2;
         for(i=0;i<n;i++)
         count=count+a[i];
         printf("%d\n",count);
        }
}
    return 0;
}
