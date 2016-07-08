#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    long long n,k,i,ans=0,a;
    scanf("%lld %lld",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        if(a%k==0)
            ans++;

    }
    printf("%lld",ans);


    return 0;
}
