#include<bits/stdc++.h>
using namespace std;
#define MOD 786433
int main()
{
    long long n;
    long long a[10002];
    scanf("%lld",&n);
    for(int i=0;i<=n;i++)
        scanf("%lld",&a[i]);
    long long q;
    scanf("%lld",&q);
    while(q--)
    {
        long long x;
        scanf("%lld",&x);
        long long ans = a[0];
        long long temp = 1;
        for(int i=1;i<=n;i++)
        {
            temp = (temp*x)%MOD;
            ans = (ans + (temp*a[i])%MOD)%MOD;
        }
        printf("%lld\n",ans);
    }
}
