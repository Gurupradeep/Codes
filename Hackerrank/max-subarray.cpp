#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long a[100002];
long long b[100002];
long long solve(int n)
    {
      if(n<0)
          return 0;
      if(a[n]!=-100000)
          return a[n];
      else
          a[n]=max(b[n],b[n]+solve(n-1));
          return a[n];

}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    long long ans,k;
    int n,i;
    scanf("%d",&t);
    while(t--)
        {
            ans=0;
           scanf("%d",&n);
            for(i=0;i<n;i++)
                {
                scanf("%lld",&b[i]);
                if(b[i]>0)
                    ans=ans+b[i];
                a[i]=-100000;
            }
           k= solve(n-1);
           if(ans==0)
               ans=*max_element(b,b+n);

           printf("%lld %lld\n",*max_element(a,a+n),ans);
        }
    }


