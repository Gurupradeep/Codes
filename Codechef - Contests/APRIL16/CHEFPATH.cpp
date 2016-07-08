#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long m,n;
		scanf("%lld %lld",&m,&n);
		int flag=1;
		if(n==1||m==1)
			flag=0;
		if(n%2==1&&m%2==1)
			flag=0;
		if((n==1&&m==2)||(m==1&&n==2))
			flag=1;
		if(flag)
			printf("Yes\n");
		else
			printf("No\n");
	}
}
