#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n,k,i,j,b;
    long long ans=0,a;
    vector<long long >v;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        {
         scanf("%lld",&a);
        v.push_back(a);
    }
    sort(v.rbegin(),v.rend());
    j=1;
    b=1;
    for(i=0;i<n;i++)
        {
           if(j>k)
               {
                 j=1;
                 b++;
           }
           ans=ans+b*v[i];
           j++;
    }
    printf("%lld\n",ans);
    v.clear();
}
