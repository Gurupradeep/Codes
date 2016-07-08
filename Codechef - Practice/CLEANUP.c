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
    int t,n,m,i,p,a[1002];
    vector<int>v;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            v.push_back(i);
        scanf("%d",&m);
        p=0;
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);

        }
        sort(a,a+m);
        for(i=0;i<m;i++)
        {
            v.erase(v.begin()+a[i]-1-p);
            p++;
        }


        for(i=0;i<n-m;i=i+2)
        {
            printf("%d\t",v[i]);

        }
        printf("\n");
        for(i=1;i<n-m;i=i+2)
        {
            printf("%d\t",v[i]);
        }
        printf("\n");
        v.clear();
    }

    return 0;
}
