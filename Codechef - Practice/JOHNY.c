#include <iostream>
#include <iostream>
#include<algorithm>
#include<map>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;

int main()
{
    int t,n,k,i;
    long a;
    vector<pair<long ,int> >v;
    scanf("%d",&t);
    while(t--)
    {
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
                scanf("%ld",&a);
                v.push_back(make_pair(a,i));
            }
            scanf("%d",&k);
            sort(v.begin(),v.end());
            for(i=0;i<n;i++)
            {
                if(v[i].second==k)
                {
                    printf("%d\n",i+1);
                    break;
                }
            }
            v.clear();


    }
    return 0;
}
