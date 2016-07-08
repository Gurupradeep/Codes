#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long n;
		long long a[100006];
		scanf("%lld",&n	);
		long long ans[100006];
		for(long long i=1;i<=n;i++)
			scanf("%lld",&a[i]);
		ans[n]=1;
		for(long long i=n-1;i>=1;i--)
		{
			if(a[i]*a[i+1]<0)
				ans[i]=ans[i+1]+1;
			else
				ans[i]=1;
		}
		for(long long i=1;i<=n;i++)
			printf("%lld ",ans[i]);
		printf("\n");
	}
}
