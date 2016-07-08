#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            long long  a[100006],n;
            cin>>n;
            long long ans=0;
            for(long long i=0;i<=100000;i++)
                a[i]=0;
            for(long long i=0;i<n;i++)
                {
                        long long temp;
                        scanf("%lld",&temp);
                        a[temp]++;
            }
            for(long long i=0;i<=100000;i++)
                {
                   if(a[i]!=0)
                       ans++;
            }
           printf("%lld\n",ans);

    }
}
