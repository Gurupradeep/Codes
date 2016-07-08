#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
               long long n;
            //   int a[1005];
               scanf("%lld",&n);
                   int a[10000];
                   int b[10000];
                   for(int i=1;i<=10000;i++)
                       {
                          a[i]=0;
                          b[i]=0;
                   }
                   for(int i=1;i<=n;i++)
                       {
                            int temp;
                             scanf("%d",&temp);
                             a[temp]++;
                   }
                   for(int i=1;i<=n;i++)
                       {
                            int temp;
                             scanf("%d",&temp);
                             b[temp]++;
                   }
                   long long ans=0;
                   for(int i=1;i<=1001;i++)
                       {
                          ans+=min(a[i],b[i]);
                   }
                   if(ans!=n)
                       printf("%lld\n",ans+1);
                   else
                       printf("%lld\n",ans-1);

    return 0;
}
