#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		int h,m;
		scanf("%d %d",&h,&m);
		long long ans=0;
		for(int i=1;i<=9;i++)
		{
			if(i<m&&i<h)
				ans++;
			if(i*10+i<h&&i<m)
				ans++;
			if(i<h&&i*10+i<m)
				ans++;
			if(i*10+i<h&&i*10+i<m)
				ans++;
		}
		printf("%lld\n",ans+1);
	}
}
