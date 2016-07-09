#include<bits/stdc++.h>
using namespace std;
long long h[100006];
long long s[100006];
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        s[0] = 0;
        for(long long i=1;i<=n;i++)
        {
            scanf("%lld",&h[i]);
        }
        sort(h+1,h+n+1);
        for(long long i=1;i<=n;i++)
        {
            s[i] = s[i-1] + h[i];
        }
        long long ans = 0;
        for(long long i=1;i<=n;i++)
        {
            ans = max(ans,(s[n]-s[i-1])*i);
        }
        printf("%lld\n",ans);
    }
}
