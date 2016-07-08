#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int t,a[52],n,c,i;
    int k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
       k = *min_element(a,a+n);
       for(i=k;i>=1;i--)
       {
           c=1;
           for(int j=0;j<n;j++)
           {
               if(a[j]%i!=0)
               {
                   c=0;
                   break;
               }
           }
           if(c)
           {
               for(int p=0;p<n;p++)
               {
                   printf("%d\t",a[p]/i);

               }
               printf("\n");
               break;
           }
       }
    }
    return 0;
}
