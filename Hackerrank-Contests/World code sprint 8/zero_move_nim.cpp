#include<bits/stdc++.h>

using namespace std;

int main()
{
	int g;
	scanf("%d",&g);
	while(g--)
	{
		long long ans = 0;
		int n;
		scanf("%d",&n);
		int temp = n;
		while(n--)
		{
			long long p;
			scanf("%lld",&p);
			ans = ans ^ p;
		}
		if(ans == 0)
		{
			if(temp%2 == 0)
				printf("L\n");
			else
				printf("W\n");
		}
		else
		{
			if(temp%2==0)
				printf("W\n");
			else
				printf("L\n");
		}
	}
}