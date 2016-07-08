#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long a[10002],b[100002],n,i,k,count=0,j;
    scanf("%lld %lld",&n,&k);
    for(i=0;i<n;i++)
        {
          scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
        {
          scanf("%lld",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+n);
    i=0;j=0;
    while(i<n&&j<n)
        {
          if(abs(b[j]-a[i])<=k)
              {
                 count++;
                  i++;
                  j++;
          }
          if(b[j]-a[i]>k)
              i++;
          if(a[i]-b[j]>k)
              j++;
    }
    printf("%lld\n",count);
    return 0;
}
