#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long modular_pow(long long base, long long exponent)
{
    long long result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % MOD;
        exponent = exponent >> 1;
        base = (base * base) % MOD;
    }
    return result;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,k;
		scanf("%lld %lld",&n,&k);
		long long result=modular_pow(k-1,n-1);
		long long ans =((k%MOD)*(result))%MOD;
		printf("%lld\n",ans);
	}
}
