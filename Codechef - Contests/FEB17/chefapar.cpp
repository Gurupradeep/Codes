#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		int flag = 0;
		int n;
		scanf("%d",&n);
		long long ans = 0;
		while(n--)
		{
			int temp;
			scanf("%d",&temp);
		
			if(temp==0 && flag == 0)
			{
				flag = 1;
			}
			if(flag)
			{
				if(temp == 0)
					ans = ans + 1100;
				if(temp == 1)
					ans = ans + 100;
			}	
		}
		printf("%lld\n",ans);

	}
}