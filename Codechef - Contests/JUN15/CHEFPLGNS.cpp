#include<algorithm>
#include<map>
#include<cstdio>
#include <iostream>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;
long long polygonArea(long long X[], long long Y[], long numPoints) ;
int main()
{
    long t,n,no,i,j,a[100000];
    long long x[100000],y[100000];
    vector<pair<long long ,long > >v;

    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%ld",&no);
            for(j=0;j<no;j++)
                scanf("%lld %lld",&x[j],&y[j]);
            v.push_back(make_pair((abs(polygonArea(x, y, no) )),i));

        }
        sort(v.begin(),v.end());
        for(i=0;i<n;i++)
        {
            a[v[i].second]=i;

        }
        for(i=0;i<n;i++)
            printf("%ld\t",a[i]);
        printf("\n");
        v.clear();
    }
    return 0;
}
long long polygonArea(long long X[], long long Y[], long numPoints)
{
  long long area = 0;
  long j = numPoints-1;

  for (long i=0; i<numPoints; i++)
    { area = area +  (X[j]+X[i]) * (Y[j]-Y[i]);
      j = i;
    }
  return area/2;
}
