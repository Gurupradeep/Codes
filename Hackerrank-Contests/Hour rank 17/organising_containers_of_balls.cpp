#include <bits/stdc++.h>
using namespace std;
long long a[103][103];
long long s[103];
long long b[103];
int main()
{
	int q;
	int n;
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				scanf("%lld",&a[i][j]);
		for(int i=1;i<=n;i++)
		{
			s[i] = 0;
			b[i] = 0;
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				s[i] = s[i] + a[i][j];  
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				b[i] = b[i] + a[j][i];  
			}
		}
		sort(b+1,b+n+1);
		sort(a+1,a+n+1);
		int flag = 1;
		for(int i=1;i<=n;i++)
		{
			if(a[i]!=b[i])
				flag = 0;
		}
		if(flag)
			print("Possible\n");
		else
			printf("Impossible\n");

	}
	return 0;
}