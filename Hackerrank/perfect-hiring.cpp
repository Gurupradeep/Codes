#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
      long long n,p,x,max=0,maxi=0,a[100002];
      scanf("%lld %lld %lld",&n,&p,&x);
      for(long long i=0;i<n;i++)
          {
              scanf("%lld",&a[i]);


               if(a[i]*p>max)
                   {
                      max=a[i]*p;
                      maxi=i+1;
               }
            p=p-x;
      }
      printf("%lld\n",maxi);
    return 0;
}
