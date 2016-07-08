#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int fast_pow(long long base, long long n,long long M)
{
	if(n==0)
		return 1;
	if(n==1)
		return base;
	long long halfn=fast_pow(base,n/2,M);
	if(n%2==0)
		return ( halfn * halfn ) % M;
	else
		return ( ( ( halfn * halfn ) % M ) * base ) % M;
}

int findMMI_fermat(int n,int M)
{
	return fast_pow(n,M-2,M);
}
long long non_zero(long long n, long long k)
{
	if(k>=n)
	{
		long long ans = 1;
		for(int i=1;i<n;i++)
			ans = (ans *2)%MOD;
		return ans;
	}
	else
	{
		if(k%2==1)
		{
			long long ans = n;
			long long prev = n;
			for(long long i=3;i<=k;i=i+2)
			{
				long long temp = ((((n-i+1)*(n-i+2))%MOD)*prev)%MOD;
                long long temp1 = ((i-1)*(i))%MOD;
                long long den = findMMI_fermat(temp1,MOD);
                long long temp3 = (den*temp)%MOD;
                prev = temp3;
                ans = (ans + temp3)%MOD;
			}
			return ans;
		}
		else
		{
			long long ans = 1;
			long long prev = 1;
			for(long long i=2;i<=k;i=i+2)
			{
				long long temp = ((((n-i+1)*(n-i+2))%MOD)*prev)%MOD;
                long long temp1 = ((i-1)*(i))%MOD;
                long long den = findMMI_fermat(temp1,MOD);
                long long temp3 = (den*temp)%MOD;
                prev = temp3;
                ans = (ans + temp3)%MOD;
			}
			return ans;

		}
	}
}
long long zero(long long n,long long k, long long zero_count)
{
	n = n - zero_count;
	if(k>=n)
	{
		long long ans = 1;
		for(int i=1;i<=n;i++)
			ans = (ans *2)%MOD;
		return ans;
	}
	else
	{
		long long ans = 1;
		long long prev = 1;
			for(long long i=1;i<=k;i=i+1)
			{
				long long temp = ((n-i+1)*prev)%MOD;
                long long temp1 = i%MOD;
                long long den = findMMI_fermat(temp1,MOD);
                long long temp3 = (den*temp)%MOD;
                prev = temp3;
                ans = (ans + temp3)%MOD;
			}
			return ans;
	}

}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,k,a[100006];
		scanf(" %lld %lld",&n,&k);
		int zero_count = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			if(a[i]==0)
				zero_count++;
		}
		if(zero_count==0)
			printf("%lld\n",non_zero(n,k) );
		else
			printf("%lld\n",zero(n,k,zero_count) );
	}
}
