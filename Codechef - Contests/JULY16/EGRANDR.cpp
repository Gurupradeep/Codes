#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main()
{
	long long n;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		int a[100006];
		int flag = 1;
		int flag1 = 0;
		double avg;
		long long sum=0;
		for(int i=0;i<n;i++)
		{
			int temp;
			scanf("%d",&temp);
			if(temp==2)
				flag = 0;
			sum +=temp;
			if(temp==5)
				flag1=1;
		}
		avg = (sum*1.0)/n;
		if(avg>=4.0)
		{
			if(flag1&&flag)
				printf("Yes\n");
			else
				printf("No\n");
		}
		else
			printf("No\n");
	}
}
